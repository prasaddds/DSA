#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[],int x,int y){
    adj[x].push_back(y);
    adj[y].push_back(x);
}
void printt(vector<int>adj[],int V){
    for(int i=0;i<V;i++){
        for(int x:adj[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int V;
    cout<<"Enter number of vertices"<<endl;
    cin>>V;
    vector<int> adj[V];
    int E;
    cout<<"Enter number of edges u want to make in graph"<<endl;
    cin>>E;
    for(int i=0;i<E;i++){
        int x,y;
        cout<<"Enter values of x and y like from which edge to which edge u want to connect"<<endl;
        cin>>x>>y;
        addEdge(adj,x,y);
    }
    printt(adj,V);
}
