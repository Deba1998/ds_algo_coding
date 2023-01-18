//problem link:- https://leetcode.com/problems/01-matrix/
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
      vector<vector<int>> vis = mat;
      int n=mat.size();
      int m=mat[0].size();
      queue<pair<int,int>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if (mat[i][j]==0)
                {
                   q.push({i,j});
                }
            }
        }
        int rowi[]={-1,0,1,0};
        int coli[]={0,1,0,-1};
        while(!q.empty())
        {
            
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for (int i=0;i<4;i++)
            {
                int nrow=r+rowi[i];
                int ncol=c+coli[i];
                if(nrow>=0 && nrow<n && ncol<m && ncol>=0  && mat[nrow][ncol]==1 )
                {
                    mat[nrow][ncol]=0;
                    vis[nrow][ncol]=vis[r][c]+1;
                    q.push({nrow,ncol});
                }
            }
        }
        return(vis);

    }
};