#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[],int x,int y){
    adj[x].push_back(y);
    adj[y].push_back(x);
}
void printt(vector<int> adj[],int V){
    for(int i=0;i<V;i++){
        for(int x:adj[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
void BFS(vector<int> adj[],int V,int s,bool isVisited[]){
    queue<int>q;
    isVisited[s]=true;
    q.push(s);
    while(q.empty()==false){
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int v:adj[u]){
            if(isVisited[v]==false){
                isVisited[v]=true;
                q.push(v);
            }
        }
    }
}
void undirectedNoSourceDisconnected(vector<int> adj[],int V){
    int count=0;
    bool isVisited[V];
    for(int i=0;i<V;i++){
        isVisited[i]=false;
    }
    for(int i=0;i<V;i++){
        if(isVisited[i]==false){
            BFS(adj,V,i,isVisited);
            count++;
        }
    }
    cout<<"Number of connected components are "<<count<<endl;
}
int main(){
    int V,E;
    cout<<"Enter number of vetrices and edges"<<endl;
    cin>>V>>E;
    vector<int> adj[V];
    for(int i=0;i<E;i++){
        int x,y;
        cout<<"Enter values of x and y"<<endl;
        cin>>x>>y;
        addEdge(adj,x,y);
    }
    printt(adj,V);
    undirectedNoSourceDisconnected(adj,V);
}
