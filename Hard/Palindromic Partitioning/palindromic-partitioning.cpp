//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int palindromicPartition(string str)
    {
        int n = str.size();
        vector<int>dp(n+1,-1);
        return helper(str,0,n,dp)-1;
    }
    
    int helper(string s, int i, int n, vector<int>&dp){
        if(i==n)return 0;
        int res = INT_MAX;
        if(dp[i]!=-1){
            return dp[i];
        }
        for(int j=i;j<n;j++){
            if(isPalindrom(i,j,s)){
                int cost = 1+helper(s,j+1,n,dp);
                res = min(res,cost);
            }
            dp[i]=res;
        }
        return dp[i];
    }
    
    bool isPalindrom(int i,int j,string s){
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else return false;
        }
        return true;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends