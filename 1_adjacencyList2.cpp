#include <bits/stdc++.h>
#include <vector>

using namespace std;

void addEdge(vector<vector<int>>& adj, int x, int y) {
    adj[x].push_back(y);
    //adj[y].push_back(x); // For an undirected graph, add edge in both directions
}

void printGraph(const vector<vector<int>>& adj) {
    for (int i = 0; i < adj.size(); i++) {
        cout << "Adjacency list of vertex " << i << ": ";
        for (int j = 0; j < adj[i].size(); j++) {
            cout << adj[i][j];
            if (j < adj[i].size() - 1) {
                cout << " -> ";
            }
        }
        cout << adj.size()<<" "<<adj[i].size()<<endl;
    }
}


int main() {
    int V, E;
    cout << "Enter the number of vertices: ";
    cin >> V;
    cout << "Enter the number of edges: ";
    cin >> E;

    // Create an adjacency list as a vector of vectors
    vector<vector<int>> adj(V);

    cout << "Enter source and destination" << endl;
    for (int i = 0; i < E; i++) {
        int x, y;
        cin >> x >> y;
        addEdge(adj, x, y);
    }

    // Print the adjacency list
    printGraph(adj);

    return 0;
}
