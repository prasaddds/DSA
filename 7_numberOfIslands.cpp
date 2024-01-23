#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int>adj[],int x,int y){
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
void DFS(vector<int>adj[],bool isVisited[],int s){
    isVisited[s]=true;
    cout<<s<<" ";
    for(int u:adj[s]){
        if(isVisited[u]==false){
            DFS(adj,isVisited,u);
        }
    }
}
void DFSS(vector<int>adj[],int v,int s){
    bool isVisited[v];
    int count=0;
    for(int i=0;i<v;i++){
        isVisited[v]=false;
    }
    for(int i=0;i<v;i++){
        if(isVisited[i]==false){
            DFS(adj,isVisited,i);
            count++;
        }
    }
    cout<<count<<endl;
}
int main(){
    int E,V;
    cout<<"Enter number of vertices and edges"<<endl;
    cin>>V>>E;
    vector<int> adj[V];
    for(int i=0;i<E;i++){
        int x,y;
        cout<<"Enter value of x and y"<<endl;
        cin>>x>>y;
        addEdge(adj,x,y);
    }
    printt(adj,V);
    DFSS(adj,V,0);
}