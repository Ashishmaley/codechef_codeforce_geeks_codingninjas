//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int solve(int n, int total, const vector<int> &cost, int i, vector<vector<int>> &memo) {
        if (i == n)
            return 0;

        if (memo[i][total] != -1) {
            return memo[i][total];
        }
        int include=0;
        if(cost[i]<=total)
        include = 1 + solve(n,total-(cost[i]-floor((cost[i]*90)/100)), cost, i + 1, memo);

        int exclude = solve(n, total, cost, i + 1, memo);

        memo[i][total] = max(include, exclude);
        return memo[i][total];
    }

    int max_courses(int n, int total, const vector<int> &cost) {
        vector<vector<int>> memo(n, vector<int>(total + 1, -1));
        int ans = solve(n, total, cost, 0, memo);
        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        Solution ob;
        cout<<ob.max_courses(n,k,arr)<<endl;
    }
}
// } Driver Code Ends