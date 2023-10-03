//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    // we will find the reminder until the count is leass than 0 ex- (n--)
    // because we are following 1 based indexing 27/26= 1+'A'.
    // than n/26 = 1
    // ans = 12=AB
    string colName (long long int n)
    {
        // your code here
        string ans="";
        while (n > 0) {
        n--;
        ans += char('A' + n % 26);
        n /= 26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}

// } Driver Code Ends