//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
	
	int nodeLevel(int V, vector<int> graph[], int X) 
	{
    if (X < 0 || X >= V) {
        return -1; // X is out of the valid node label range
    }

    vector<bool> visited(V, false);
    int level = 0;

    queue<pair<int, int>> q; // Pair format: (node, level)
    q.push({0, 0}); // Start from node 0
    visited[0] = true;

    while (!q.empty()) {
        int node = q.front().first;
        level = q.front().second;
        q.pop();

        if (node == X) {
            return level; // Found the target node
        }

        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                q.push({neighbor, level + 1});
                visited[neighbor] = true;
            }
        }
    }

    return -1; 
	}
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E, X;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	cin>>X;

    	Solution obj;
    	cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}


// } Driver Code Ends