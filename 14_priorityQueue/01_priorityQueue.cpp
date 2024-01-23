#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    cout<<pq.size()<<endl;
    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    cout<<"Elements printed"<<endl;

    priority_queue<int,vector<int>,greater<int>> pq1;
    pq1.push(10);
    pq1.push(20);
    pq1.push(30);
    cout<<pq1.size()<<endl;
    while(pq1.empty()==false){
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
    cout<<endl;

    int arr[]={20,40,50,10,-10};
    int n=5;
    priority_queue<int> pq2(arr,arr+n);
    while(pq.empty()==false){
        cout<<pq2.top()<<" ";
        pq.pop();
    }
}
