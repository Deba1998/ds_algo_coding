//problem link:-https://leetcode.com/problems/number-of-enclaves/description/
class Solution {

  void dfs(int i,int j, vector<vector<int>> &vis, vector<vector<int>> &board)
  {
      int n=board.size();
      int m=board[0].size();
      //cout << i <<" " << j<< endl;
      vis[i][j]=1;
      int rowi[]= {-1,0,1,0};
      int coli[]= {0,1,0,-1};
      for(int k=0;k<4;k++)
      {
          int nrow= i+rowi[k];
          int ncol= j+coli[k];
          //cout<< nrow << " "<< ncol<<endl;
          if(nrow>=0 && nrow<n && ncol >=0 && ncol<m && vis[nrow][ncol]==0 && board[nrow][ncol]==1)
          {
              dfs(nrow,ncol,vis,board);
          }
      }
  }
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int j=0;j<m;j++)
        {
             if(!vis[0][j] && grid[0][j]==1)
             {
                 dfs(0,j,vis,grid);
             }
             if(!vis[n-1][j] && grid[n-1][j]==1)
             {
                 dfs(n-1,j,vis,grid);
             }

        }
        for(int i=0;i<n;i++)
        {
             if(!vis[i][0] && grid[i][0]==1)
             {
                 dfs(i,0,vis,grid);
             }
             if(!vis[i][m-1] && grid[i][m-1]==1)
             {
                 dfs(i,m-1,vis,grid);
             }

        }
        int results=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                //cout<< vis[i][j]<< " ";
                if (grid[i][j]==1 && vis[i][j]==0)
                {
                    results++;
                }
            }
        }
        return results;
    }
};