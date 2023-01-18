//problem link:- https://leetcode.com/problems/surrounded-regions/
class Solution {
  void dfs(int i,int j, vector<vector<int>> &vis, vector<vector<char>> &board)
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
          if(nrow>=0 && nrow<n && ncol >=0 && ncol<m && vis[nrow][ncol]==0 && board[nrow][ncol]=='O')
          {
              dfs(nrow,ncol,vis,board);
          }
      }
  }

public:
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int j=0;j<m;j++)
        {
             if(!vis[0][j] && board[0][j]=='O')
             {
                 dfs(0,j,vis,board);
             }
             if(!vis[n-1][j] && board[n-1][j]=='O')
             {
                 dfs(n-1,j,vis,board);
             }

        }
        for(int i=0;i<n;i++)
        {
             if(!vis[i][0] && board[i][0]=='O')
             {
                 dfs(i,0,vis,board);
             }
             if(!vis[i][m-1] && board[i][m-1]=='O')
             {
                 dfs(i,m-1,vis,board);
             }

        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                //cout<< vis[i][j]<< " ";
                if (board[i][j]=='O' && vis[i][j]==0)
                {
                    board[i][j]='X';
                }
            }
            cout<<endl;
        }
    }
};