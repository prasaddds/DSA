#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int>adj[], int x,int y,int inDegree[]){
    adj[x].push_back(y);
    inDegree[y]=inDegree[y]+1;
}
void topologicalSorting(vector<int> adj[],int V,int inDegree[]){
    bool isVisited[V];
    queue<int> q;
    for(int i=0;i<V;i++){
        isVisited[i]=true;
        if(inDegree[i]==0){
            q.push(i);
        }
    }
    int count=0;
    while(q.empty()==false){
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int x:adj[u]){
            if(--inDegree[x]==0){
                q.push(x);
            }
        }  
        count++;  
    }
    if(count!=V){
        cout<<"Cycle found"<<endl;
    }
    else{
        cout<<"No cycle found"<<endl;
    }
}
int main(){
    int V,E;
    cout<<"Enter number of vertices and edges"<<endl;
    cin>>V>>E;
    vector<int> adj[V];
    int inDegree[V];
    for(int i=0;i<V;i++){
        inDegree[i]=0;
    }
    cout<<"Enter edges source and destination"<<endl;
    for(int i=0;i<E;i++){
        int x,y;
        cin>>x>>y;
        addEdge(adj,x,y,inDegree);
    }
    topologicalSorting(adj,V,inDegree);
}
