//problem link:- https://leetcode.com/problems/rotting-oranges/

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int vis[n][m];
        int freshorange=0;
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if (grid[i][j]==2)
                {
                   vis[i][j]=2;
                   q.push({{i,j},0});
                }
                else if (grid[i][j]==1)
                {
                    freshorange++;
                    vis[i][j]=0;
                }
                else
                {
                    vis[i][j]=0;
                }
            }
        }
        int maxi=0;
        int rowi[]={-1,0,1,0};
        int coli[]={0,1,0,-1};
        int fre=0;
        while(!q.empty())
        {
            int r=q.front().first.first;
            int c=q.front().first.second;
            int time=q.front().second;
            maxi=max(maxi,time);
            q.pop();
            for (int i=0;i<4;i++)
            {
                int nrow=r+rowi[i];
                int ncol=c+coli[i];
                if(nrow>=0 && nrow<n && ncol<m && ncol>=0 && vis[nrow][ncol]!=2 && grid[nrow][ncol]==1 )
                {
                    vis[nrow][ncol]=2;
                    fre++;
                    q.push({{nrow,ncol},time+1});
                }
            }
        }
        if (freshorange==fre)
        {
            return maxi;
        }
        else
        {
            return -1;
        }
    }
};