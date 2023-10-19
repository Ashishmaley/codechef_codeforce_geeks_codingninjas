//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> eventualSafeNodes(int V, vector<int> graph[]) {
       vector<vector<int>> reversed_graph(V);
  for (int i = 0; i < V; i++) {
    for (int neighbor : graph[i]) {
      reversed_graph[neighbor].push_back(i);
    }
  }

  // Compute the indegree for each of the vertices.
  vector<int> indegree(V, 0);
  for (int vertex = 0; vertex < reversed_graph.size(); vertex++) {
    for (int neighbor : reversed_graph[vertex]) {
      indegree[neighbor]++;
    }
  }

  // Add all the vertices with indegree zero to a queue.
  queue<int> queue;
  for (int vertex = 0; vertex < V; vertex++) {
    if (indegree[vertex] == 0) {
      queue.push(vertex);
    }
  }

  // While the queue is not empty, remove the front element and add all its
  // neighbors to the queue if their indegree is reduced to zero.
  vector<int> safe_states;
  while (!queue.empty()) {
    int vertex = queue.front();
    queue.pop();
    safe_states.push_back(vertex);
    for (int neighbor : reversed_graph[vertex]) {
      indegree[neighbor]--;
      if (indegree[neighbor] == 0) {
        queue.push(neighbor);
      }
    }
  }
  sort (safe_states.begin(),safe_states.end());
  return safe_states;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends