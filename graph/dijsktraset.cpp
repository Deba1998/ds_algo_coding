class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
                // Create a priority queue for storing the nodes as a pair {dist,node}
        // where dist is the distance from source to the node. 
        //priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        set<pair<int,int>> st;

        // Initialising distTo list with a large number to
        // indicate the nodes are unvisited initially.
        // This list contains distance from source to the nodes.
        vector<int> distTo(V, 1e9);

        // Source initialised with dist=0.
        distTo[S] = 0;
        //pq.push({0, S});
        st.insert({0,S});

        // Now, pop the minimum distance node first from the min-heap
        // and traverse for all its adjacent nodes.
        while (!st.empty())
        {
            auto it=*(st.begin());
            int node = it.second;
            int dis = it.first;
            st.erase(it);
            //pq.pop();

            // Check for all adjacent nodes of the popped out
            // element whether the prev dist is larger than current or not.
            for (auto it : adj[node])
            {
                int v = it[0];
                int w = it[1];
                if (dis + w < distTo[v])
                {
                    
                    if(distTo[v]!=1e9)
                    {
                        st.erase({distTo[v],v});
                    }
                    distTo[v] = dis + w;
    
                    // If current distance is smaller,
                    // push it into the queue.
                    st.insert({dis + w, v});
                }
            }
        }
        // Return the list containing shortest distances
        // from source to all the nodes.
        return distTo;
    }
};