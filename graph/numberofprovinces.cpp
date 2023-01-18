//problem link:- https://leetcode.com/problems/number-of-provinces/
#include<bits/stdc++.h>
using namespace std;
class Solution {
 void dfs(int node, int vis[], vector<int> adjl[])
 {
     vis[node]=1;
     for (auto it:adjl[node])
     {
         if (!vis[it])
         {
             dfs(it,vis,adjl);
         }
     }
 }


public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> adjl[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if (isConnected[i][j]==1 && i!=j)
                {
                    adjl[i].push_back(j);
                    adjl[j].push_back(i);
                }
            }
        }
        int count=0;
        int vis[n];
        memset( vis, 0, n*sizeof(int) );
        for (int i=0;i<n;i++)
        {
            if (!vis[i])
            {
                count++;
                dfs(i,vis,adjl);
            }
        }

        return count;
    }
};