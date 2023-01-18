//problem link:- https://leetcode.com/problems/flood-fill/submissions/871870682/
/{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  void dfs(int i, int j,int icolour, vector<vector<int>>& image,int n,int m, int color)
  {
      //cout<< i <<" " << j <<endl;
      image[i][j]=color;
      if ((i-1)>=0)
      {
          if (image[i-1][j]==icolour)
          {
              dfs(i-1,j,icolour,image,n,m,color);
          }
      }
      if ((i+1)<n)
      {
          if (image[i+1][j]==icolour)
          {
              dfs(i+1,j,icolour,image,n,m,color);
          }
      }
      if ((j-1)>=0)
      {
          if (image[i][j-1]==icolour)
          {
              dfs(i,j-1,icolour,image,n,m,color);
          }
      }
      if ((j+1)<m)
      {
          
          if (image[i][j+1]==icolour)
          {
              dfs(i,j+1,icolour,image,n,m,color);
          }
      }
  }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here 
        int n=image.size();
        int m=image[0].size();
        //cout<<n<<endl;
        int icolour=image[sr][sc];
        if (icolour!=newColor)
        {
        dfs(sr,sc,icolour,image,n,m,newColor);
        }
        return(image);
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends