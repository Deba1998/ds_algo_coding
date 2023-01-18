//problemlink:- https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=detect-cycle-in-an-undirected-graph
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  bool bfs(int node,int parent, int vis[], vector<int> adj[]){
      vis[node]=1;
      queue<pair<int,int>> q;
      q.push({node,parent});
      while(!q.empty())
      {
          int node=q.front().first;
          int parent=q.front().second;
          q.pop();
          for(auto it: adj[node])
          {
              if (!vis[it])
              {
                  vis[it]=1;
                  q.push({it,node});
              }
              else if (parent!=it){
                  return true;
              }
          }
      }
      return false;
  }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        int vis[V];
        memset(vis,0,V*sizeof(int));
        for(int i=0;i<V;i++){
            if (!vis[i]){
                if (bfs(i,-1,vis,adj)==true){
                    return true;
                }
            }
        }
        return(false);
        
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