//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        vector<vector<int>>dp(W+1,vector<int>(N+1,-1));
        return recursion(N,W,val,wt,0,dp);
    }
    int recursion(int N, int W, int val[], int wt[],int index,vector<vector<int>>&dp){
        if(index==N)return 0;
        if(dp[W][index]!=-1)return dp[W][index];
        int include=0;
        if(W>=wt[index])
        include = val[index]+recursion(N,W-wt[index],val,wt,index,dp);
        int exclude =0+recursion(N,W,val,wt,index+1,dp);
        
        dp[W][index] = max(include,exclude);
        return dp[W][index];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends