//problem link:- https://practice.geeksforgeeks.org/problems/find-the-number-of-islands/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find_the_number_of_islands


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  void dfs(int i, int j, vector<vector<char>>& grid,int n,int m)
  {
    //   cout<< i <<" " << j <<endl;
      grid[i][j]=0;
      if ((i-1)>=0)
      {
          if (grid[i-1][j]=='1')
          {
              dfs(i-1,j,grid,n,m);
          }
      }
      if ((i+1)<n)
      {
          if (grid[i+1][j]=='1')
          {
              dfs(i+1,j,grid,n,m);
          }
      }
      if ((j-1)>=0)
      {
          if (grid[i][j-1]=='1')
          {
              dfs(i,j-1,grid,n,m);
          }
      }
      if ((j+1)<m)
      {
          
          if (grid[i][j+1]=='1')
          {
              dfs(i,j+1,grid,n,m);
          }
      }
      if ((i-1)>=0 && (j-1)>=0)
      {
          if (grid[i-1][j-1]=='1')
          {
              dfs(i-1,j-1,grid,n,m);
          }
      }
       if ((i-1)>=0 && (j+1)<m)
      {
          if (grid[i-1][j+1]=='1')
          {
              dfs(i-1,j+1,grid,n,m);
          }
      }
       if ((i+1)<n && (j-1)>=0)
      {
          
          if (grid[i+1][j-1]=='1')
          {
              dfs(i+1,j-1,grid,n,m);
          }
      }
       if ((i+1)<n && (j+1)<m)
      {
          if (grid[i+1][j+1]=='1')
          {
              dfs(i+1,j+1,grid,n,m);
          }
      }
  }
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n=grid.size();
        //cout<<n<<endl;
        int m=grid[0].size();
        //cout<< m;
        int count=0;
        for(int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    //cout<<grid[i][j]<<endl;
                    //cout<<"hagu" << endl;
                    // cout<<i <<" "<< j<<endl;
                    // cout<<"dfs========================================="<<endl;
                    count++;
                    dfs(i,j,grid,n,m);
                    // cout<<"dfsend========================================"<<endl;
                }
            }
        }
        return(count);
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends