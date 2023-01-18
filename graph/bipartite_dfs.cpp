// problem link:- https://leetcode.com/problems/is-graph-bipartite/description/
class Solution {
   bool dfs(int node, int vis[], vector<vector<int>> &graph, int colour)
   {
       vis[node]=colour;
       for(auto it:graph[node])
           {
               if(vis[it]==-1)
               {
                   if (dfs(it,vis,graph,!vis[node])==false)
                   {
                       return false;
                   }
                   
               }
               else if (vis[it]==vis[node]){
                   return false;
               }
           }
       return true;
   }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        int vis[n];
        memset(vis, -1, n*sizeof(int));
        for(int i=0;i<n;i++)
        {
            if (vis[i]==-1)
            {
                if(dfs(i,vis,graph,0)==false)
                {
                    //cout<<"hagu"<<endl;
                    //cout<<i;
                    return false;
                }
            }
        }
        return true;
    }
};