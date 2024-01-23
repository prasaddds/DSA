#include <bits/stdc++.h>
using namespace std;

const int INF = 99999;

void primsAlgorithm(vector<int> adj[], vector<vector<int>>& weights, int V)
{
    int key[V];
    for (int i = 0; i < V; i++) {
        key[i] = INF;
    }
    
    key[0] = 0;
    bool MST[V] = {false};
    int u = -1;
    int res = 0;
    
    for (int i = 0; i < V; i++)
    {
        u = -1;
        for (int j = 0; j < V; j++)
        {
            if (!MST[j] && (u == -1 || key[j] < key[u]))
            {
                u = j;
            }
        }
        MST[u] = true;
        res = res + key[u];

        for (int v = 0; v < V; v++)
        {
            if (weights[u][v] != 0 && MST[v] == false)
            {
                key[v] = min(key[v], weights[u][v]);
            }
        }
    }
    cout << res << endl;
}

int main()
{
    int V, E;
    cout << "Enter number of vertices and edges" << endl;
    cin >> V >> E;
    vector<int> adj[V];
    vector<vector<int>> weights(V, vector<int>(V, INF));
    
    for (int i = 0; i < E; i++)
    {
        cout << "Enter source, destination and weights " << endl;
        int x, y, weight;
        cin >> x >> y >> weight;
        adj[x].push_back(y);
        adj[y].push_back(x);
        weights[x][y] = weight;
        weights[y][x] = weight; // Since it's an undirected graph
    }
    
    primsAlgorithm(adj, weights, V);
    
    return 0;
}
