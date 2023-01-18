// for undirected graph

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++)
    {
      int u,v;
      cin >> u >> v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }
    return 0;
}

// for directed graph

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++)
    {
      int u,v;
      cin >> u >> v;
      adj[u].push_back(v); //edge from u to v
    }
    return 0;
}

// for undirected weighted  graph

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;
    vector<pair<int,int>> adj[n+1];
    for(int i=0;i<m;i++)
    {
      int u,v,w;
      cin >> u >> v >> w;  // w represents weight
      adj[u].push_back({v,w}); 
      adj[v].push_back({u,w}); 
    }
    return 0;
}