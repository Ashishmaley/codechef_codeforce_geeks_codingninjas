//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int minCoins(int coins[], int M, int V) {
    vector<int> dp(V + 1, INT_MAX);
    int ans = solveTab(coins, M, V, dp);
    if(ans==INT_MAX){
        return -1;
    }
    return ans;
}

int solveTab(int coins[], int M, int cost, vector<int>& dp) {
    if (cost == 0) return 0;
    if (cost < 0) return INT_MAX;
    if (dp[cost] != INT_MAX) return dp[cost];

    int mini = INT_MAX;
    for (int i = 0; i < M; i++) {
        int ans = solveTab(coins, M, cost - coins[i], dp);
        if (ans != INT_MAX) {
            mini = min(ans + 1, mini);
        }
    }

    dp[cost] = mini;
    return dp[cost];
}

	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends