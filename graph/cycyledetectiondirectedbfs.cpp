//problem link:- https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=detect-cycle-in-a-directed-graph
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
 
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        int indeg[V] = {0};
	    for(int i=0;i<V;i++)
	    {
	        for(auto it: adj[i])
	        {
	            indeg[it]++;
	        }
	    }
	    queue<int> q;
	    for(int i=0;i<V;i++)
	    {
	        if (indeg[i]==0)
	        {
	            q.push(i);
	        }
	    }
	    int results=0;
	    while(!q.empty())
	    {
	        int node=q.front();
	        q.pop();
	        results++;
	        for(auto it:adj[node])
	        {
	            indeg[it]--;
	            if(indeg[it]==0)
	            {
	                q.push(it);
	            }
	        }
	    }
	    if(results==V)
	    {
	        return false;
	    }
	    return true;
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
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends