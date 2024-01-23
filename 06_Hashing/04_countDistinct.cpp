#include<bits/stdc++.h>
using namespace std;
int main(){
    // unordered_set<int> s={10,10,20,30,1,0,0,0};
    // for(auto it=s.begin();it!=s.end();it++){

    // }
    // cout<<s.size();
    int arr[]={10,20,10,20,30};
    int n=5;
    // unordered_set<int> s;
    // for(int i=0;i<n;i++){
    //     s.insert(arr[i]);
    // }
    unordered_set<int> s(arr,arr+n);
    cout<<s.size()<<endl;
}
