// #include<bits/stdc++.h>
// using namespace std;
// int INF=99999;
// vector<int> topologicalSort(vector<vector<int>> adj,int V,bool isVisited[],int inDegree[],int source){
//     inDegree[source]=0;
//     queue<int> q;
//     for(int i=0;i<V;i++){
//         isVisited[i]=true;
//         if(inDegree[i]==0){
//             q.push(i);
//         }
//     }
//     vector<int> topologicalOrder;
//     int front;
//     while(q.empty()==false){
//         int u=q.front();
//         topologicalOrder.push_back(u);
//         q.pop();
//         cout<<u<<" ";
//         for(int x:adj[u]){
//             if(--inDegree[x]==0){
//                 q.push(x);
//             }
//         }
//     }
//     return topologicalOrder;
// }
// int *shortestDistance(vector<vector<int>> adj,int V,vector<int> topo,
// int source,vector<vector<int>> weights){
//     int distance[V];    
//     for(int i=0;i<V;i++){
//         if(V==source){
//             distance[i]=0;
//         }
//         else{
//             distance[i]=INF;
//         }
//     }
//     for(int x:topo){
//         for(int y:adj[x]){
//             int alt=distance[x]+weights[x][y];
//             if(distance[y]>alt){
//                 distance[y]=alt;
//             }
//         }
//     }
//     return distance;
// }
// int main(){
//     int V,E;
//     cout<<"Enter number of vertices and edges"<<endl;
//     cin>>V>>E;
//     vector<vector<int>> adj(V);
//     vector<vector<int>> weights(V,vector<int>(V,INF));
//     int inDegree[V]={0};
//     for(int i=0;i<E;i++){
//         int x,y,weight1;
//         cout<<"Enter x,y and weight from x to y"<<endl;
//         cin>>x>>y>>weight1;
//         adj[x].push_back(y);
//         inDegree[y]++;
//         weights[x][y]=weight1;
//     }
//     // for(int i=0;i<adj.size();i++){
//     //     for(int j=0;j<adj[i].size();j++){
//     //         cout<<adj[i][j]<<" ";
//     //     }
//     //     cout<<endl;
//     // }
//     bool isVisited[V];
//     for(int i=0;i<V;i++){
//         isVisited[i]=false;
//     }
//     vector<int> topo=topologicalSort(adj,V,isVisited,inDegree,0);
//     // for(int i=0;i<topo.size();i++){
//     //     cout<<topo[i]<<" ";
//     // }
// int *sD = shortestDistance(adj, V, topo, 0, weights);
// cout << "Printing shortest distance" << endl;
// for (int i = 0; i < V; i++) {
//     cout << sD[i] << " ";
// }
// }


#include<bits/stdc++.h>
using namespace std;

const int INF = 99999;

vector<int> topologicalSort(vector<vector<int>>& adj, int V, bool isVisited[], int inDegree[], int source) {
    inDegree[source] = 0;
    queue<int> q;
    for (int i = 0; i < V; i++) {
        isVisited[i] = true;
        if (inDegree[i] == 0) {
            q.push(i);
        }
    }
    vector<int> topologicalOrder;
    while (!q.empty()) {
        int u = q.front();
        topologicalOrder.push_back(u);
        q.pop();
        for (int x : adj[u]) {
            if (--inDegree[x] == 0) {
                q.push(x);
            }
        }
    }
    return topologicalOrder;
}

int* shortestDistance(vector<vector<int>>& adj, int V, vector<int>& topo, int source, vector<vector<int>>& weights) {
    int* distance = new int[V];
    for (int i = 0; i < V; i++) {
        if (i == source) {
            distance[i] = 0;
        }
        else {
            distance[i] = INF;
        }
    }
    for (int x : topo) {
        for (int y : adj[x]) {
            int alt = distance[x] + weights[x][y];
            if (distance[y] > alt) {
                distance[y] = alt;
            }
        }
    }
    return distance;
}

int main() {
    int V, E;
    cout << "Enter number of vertices and edges" << endl;
    cin >> V >> E;
    vector<vector<int>> adj(V);
    vector<vector<int>> weights(V, vector<int>(V, INF));
    int inDegree[V] = { 0 };
    for (int i = 0; i < E; i++) {
        int x, y, weight1;
        cout << "Enter x, y and weight from x to y" << endl;
        cin >> x >> y >> weight1;
        adj[x].push_back(y);
        inDegree[y]++;
        weights[x][y] = weight1;
    }

    bool isVisited[V] = { false };
    vector<int> topo = topologicalSort(adj, V, isVisited, inDegree, 0);

    int* sD = shortestDistance(adj, V, topo, 0, weights);
    cout << "Printing shortest distance" << endl;
    for (int i = 0; i < V; i++) {
        cout << sD[i] << " ";
    }
    cout << endl;

    // Don't forget to delete the dynamically allocated array to avoid memory leaks.
    delete[] sD;

    return 0;
}
