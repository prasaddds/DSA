#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int> s;
    int arr1[]={10,15,20,25,30,50};
    int n1=6;
    int arr2[]={30,5,15,80};
    int n2=4;
    for(int i=0;i<n1;i++){
        s.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++){
        if(s.find(arr2[i])!=s.end()){
            cout<<arr2[i]<<" ";
            auto it=s.find(arr2[i]);
            s.erase(it);
        }
    }
}
