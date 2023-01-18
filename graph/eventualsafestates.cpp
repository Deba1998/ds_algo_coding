//problem link:- https://leetcode.com/problems/find-eventual-safe-states/description/
class Solution {

     bool dfsCheck(int node, vector<vector<int>> &adj, int vis[], int pathVis[],int check[]) {
		vis[node] = 1;
		pathVis[node] = 1;
        //check[node]=0;
		// traverse for adjacent nodes
		for (auto it : adj[node]) {
			// when the node is not visited
			if (!vis[it]) {
				if (dfsCheck(it, adj, vis, pathVis,check) == true)
                {
					//cout<<node<<endl;
                    //check[node]=0;
                    return true;
                }
			}
			// if the node has been previously visited
			// but it has to be visited on the same path
			else if (pathVis[it]) {
				//cout<<node<<endl;
                //check[node]=0;
                return true;
			}
		}
        //cout<< node<<endl;
        check[node]=1;
		pathVis[node] = 0;
		return false;
	}
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        
        int V=graph.size();
        int vis[V];
		int pathVis[V];
        int check[V];
        memset(vis,0,V*sizeof(int));
        memset(pathVis,0,V*sizeof(int));
        memset(check,0,V*sizeof(int));
		for (int i = 0; i < V; i++) {
			if (!vis[i]) {
				dfsCheck(i, graph, vis, pathVis,check);
			}
		}
        vector<int> result;
        for (int i = 0; i < V; i++) {
			if (check[i]==1) {
				result.push_back(i);
			}
		}

        return(result);
	
    }
};