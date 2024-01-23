#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[],int x,int y){
    adj[x].push_back(y);
    adj[y].push_back(x);
}
void printt(vector<int> adj[],int v){
    for(int i=0;i<v;i++){
        for(int x:adj[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
void BFS(vector<int> adj[],int v,int s){
    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    queue<int> q;
    visited[s]=true;
    q.push(s);
    while(q.empty()==false){
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int v:adj[u]){
            if(visited[v]==false){
                visited[v]=true;
                q.push(v);
            }
        }
    }
}
int main(){
    int v;
    cout<<"Enter number of vertices"<<endl;
    cin>>v;
    int e;
    cout<<"Enter number of edges"<<endl;
    cin>>e;
    vector<int> adj[v];
    for(int i=0;i<e;i++){
        int x,y;
        cout<<"Enter values of x and y"<<endl;
        cin>>x>>y;
        addEdge(adj,x,y);
    }
    printt(adj,v);
    int s;
    cout<<"\nEnter source node to print its BFS"<<endl;
    cin>>s;
    BFS(adj,v,s);
}
