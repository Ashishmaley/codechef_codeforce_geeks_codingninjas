//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool isValid(int i,int j,int n,int m){
        if(i>=0&&i<n&&j>=0&&j<m)return true;
        return false;
    }
  
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        vector<vector<bool>>visited(N,vector<bool>(M,false));
        queue<pair<int,int>>q;
        if(A[0][0]==1)
        {
            q.push({0,0});
            visited[0][0]=true;
        }
        int step = 0;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                int i = q.front().first;
                int j = q.front().second;
                q.pop();
                if(i==X&&j==Y){
                    return step;
                }
                //up
                if(isValid(i-1,j,N,M)&&A[i-1][j]==1&&!visited[i-1][j]){
                    visited[i-1][j]=true;
                    q.push({i-1,j});
                }
                //down
                if(isValid(i+1,j,N,M)&&A[i+1][j]==1&&!visited[i+1][j]){
                    visited[i+1][j]=true;
                    q.push({i+1,j});
                }
                //left
                if(isValid(i,j-1,N,M)&&A[i][j-1]==1&&!visited[i][j-1]){
                    visited[i][j-1]=true;
                    q.push({i,j-1});
                }
                //right
                if(isValid(i,j+1,N,M)&&A[i][j+1]==1&&!visited[i][j+1]){
                    visited[i][j+1]=true;
                    q.push({i,j+1});
                }
            }
            step++;
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends