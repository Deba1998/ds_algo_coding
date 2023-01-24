//problem link:- https://leetcode.com/problems/shortest-path-in-binary-matrix/description/
class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if (grid[0][0]==1) return -1;
        int n=grid.size();
        vector<vector<int>> dist(n,(vector<int>(n,1e9)));
        //vector<vector<int>> vis(n,(vector<int>(n,0)));
        queue<pair<int,int>> q;
        q.push({0,0});
        dist[0][0]=1;
        //vis[0][0]=1;
        int rowi[]={-1,-1,-1,0,1,1,1,0};
        int coli[]={-1,0,1,1,1,0,-1,-1};
        while(!q.empty())
        {
           int r=q.front().first;
           int c=q.front().second;
           q.pop();
           
           for(int i=0;i<8;i++)
           {
               int nrow=r+rowi[i];
               int ncol=c+coli[i];
               if(nrow>=0 && nrow<n && ncol>=0 && ncol<n && grid[nrow][ncol]==0 )
               {
                  if(dist[nrow][ncol]>dist[r][c]+1)
                  {
                      dist[nrow][ncol]=dist[r][c]+1;
                      q.push({nrow,ncol});
                      //cout<< nrow<<" "<< ncol<<endl;
                  }   
               }
           }
        }
        if (dist[n-1][n-1]==1e9)
        {
            return -1;
        }
        else
        {
            return dist[n-1][n-1];
        }
    }
};