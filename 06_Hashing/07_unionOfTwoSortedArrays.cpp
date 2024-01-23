#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr1[]={10,20,30,40,50};
    int n1=5;
    int arr2[]={10,20,20,20,30,40};
    int n2=6;
    unordered_set<int> s;
    for(int i=0;i<n1;i++){
        s.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++){
        s.insert(arr2[i]);
    }
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
}
