//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
  const int MOD = 1000000007;

	int distinctSubsequences(string s)
	{
	   
	    int n = s.length();
    
        vector<long long> dp(n + 1, 0); 
        vector<int> lastOccur(26, -1);  
        dp[0] = 1; 
        for (int i = 1; i <= n; i++) {
          dp[i] = (2 * dp[i - 1]) % MOD; 
          if (lastOccur[s[i - 1] - 'a'] != -1) {
            dp[i] -= dp[lastOccur[s[i - 1] - 'a']]; 
            }
        
          dp[i] %= MOD;
          lastOccur[s[i - 1] - 'a'] = i - 1; }
    
      dp[n]--; 
      if (dp[n] < 0) {
        dp[n] += MOD;
      }
    
     return dp[n]+1;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

        Solution ob;
   		cout << ob.distinctSubsequences(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends