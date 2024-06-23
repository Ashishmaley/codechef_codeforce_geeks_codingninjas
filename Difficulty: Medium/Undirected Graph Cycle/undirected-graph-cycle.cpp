//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool isCycle(int V, vector<int> adj[]) {
    vector<bool> visited(V, false);
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            if (check(V, adj, visited, i)) {
                return true;
            }
        }
    }
    return false;
}

bool check(int V, vector<int> adj[], vector<bool>& visited, int index) {
    vector<int> parent(V, -1);
    queue<int> que;
    visited[index] = true;
    que.push(index);

    while (!que.empty()) {
        int front = que.front();
        que.pop();

        for (int i = 0; i < adj[front].size(); i++) {
            int neighbor = adj[front][i];

            if (visited[neighbor] && neighbor != parent[front]) {
                return true;
            }

            if (!visited[neighbor]) {
                que.push(neighbor);
                visited[neighbor] = true;
                parent[neighbor] = front;
            }
        }
    }
    return false;
}

};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends