//problem link:- https://leetcode.com/problems/cheapest-flights-within-k-stops/description/
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pair<int,int>> adj[n];
        for(int j=0;j<flights.size();j++)
        {
            adj[flights[j][0]].push_back({flights[j][1],flights[j][2]});
        }
        queue<pair<int,pair<int,int>>> pq;
        vector<int> dist(n,1e9);
        dist[src]=0;
        
        pq.push({-1,{src,0}});
        while(!pq.empty())
        {
            int fligh=pq.front().first;
            int v=pq.front().second.first;
            int wt=pq.front().second.second;
            pq.pop();
            if (fligh+1>k){
                continue;
            }
            for(auto it:adj[v])
            {
                 int nd=it.first;
                 int weig=it.second;
                 if (dist[nd]>weig+wt)
                 {
                     dist[nd]=weig+wt;
                     pq.push({fligh+1,{nd,weig+wt}});
                 }
            }
        }
        // for(auto it:dist)
        // {
        //     cout<<it<<" ";
        // }
        // cout<<endl;

        if (dist[dst]==1e9)
        {
            return -1;
        }
        else{
            return dist[dst];
        }
    }
};