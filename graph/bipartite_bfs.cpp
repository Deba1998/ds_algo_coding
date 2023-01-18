//problem link:- https://leetcode.com/problems/is-graph-bipartite/description/
class Solution {
   bool bfs(int node, int vis[], vector<vector<int>> &graph)
   {
       vis[node]=0;
       queue<int> q;
       q.push(node);
       while(!q.empty())
       {
           int nd=q.front();
           q.pop();
           for(auto it:graph[nd])
           {
               if(vis[it]==-1)
               {
                   vis[it]=!vis[nd];
                   q.push(it);
               }
               else if (vis[it]==vis[nd]){
                   return false;
               }
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
                if(bfs(i,vis,graph)==false)
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