#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={10,20,5,1};
    int n=4;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int> v={10,20,30,40};
    sort(v.begin(),v.end());
    for(int i=0;i<4;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end(),greater<int>());
        for(int i=0;i<4;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
