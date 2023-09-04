//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int r[4]={-1,0,1,0};
    int c[4]={0,1,0,-1};
    void dfs(int n,int m,vector<vector<char>>& mat,int i,int j,vector<vector<int>> &vis){
           vis[i][j]=1;
           for(int k=0;k<4;k++){
               int x=i+r[k];
               int y=j+c[k];
               if (x >= 0 && x < n && y >= 0 && y < m && mat[x][y] == 'O' && !vis[x][y]) {
                dfs(n, m, mat, x, y, vis);
             }
           }
        }
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
        vector<vector<int>> vis(n,vector<int>(m,0));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if ((i==0||i==n-1||j==0||j==m-1)&&mat[i][j] == 'O'&&vis[i][j]==0)
                dfs(n, m, mat, i, j,vis);
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (mat[i][j] == 'O'&&vis[i][j]==0)
                mat[i][j]='X';
            }
        }
        
        return mat;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends