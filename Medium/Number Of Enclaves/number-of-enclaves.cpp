//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    int dx[4] = {-1,0,1,0};
    int dy[4] = {0,1,0,-1};
    
    bool isSafe(vector<vector<int>> &grid,vector<vector<bool> >& vis,int i,int j,int n,int m){
        return (i>=0&&i<n&&j<m&&j>=0&&grid[i][j]==1&&vis[i][j]==false);
    }
    
    void dfs(vector<vector<int>> &grid,vector<vector<bool> >& vis,int i,int j,int n,int m)
    {
        vis[i][j]=true;
        for(int k=0;k<4;k++){
            int x = i+dx[k];
            int y = j+dy[k];
            if(isSafe(grid,vis,x,y,n,m)){
                dfs(grid,vis,x,y,n,m);
            }
        }
        
    }
    
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool> > vis(n,vector<bool>(m,false));
        
        for(int i=0;i<n;i++){
            if(grid[i][0]==1){
                dfs(grid,vis,i,0,n,m);
            }
        }
        for(int i=0;i<n;i++){
            if(grid[i][m-1]==1){
                dfs(grid,vis,i,m-1,n,m);
            }
        }for(int i=0;i<m;i++){
            if(grid[0][i]==1){
                dfs(grid,vis,0,i,n,m);
            }
        }for(int i=0;i<m;i++){
            if(grid[n-1][i]==1){
                dfs(grid,vis,n-1,i,n,m);
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1&&vis[i][j]==false){
                    ans++;
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends