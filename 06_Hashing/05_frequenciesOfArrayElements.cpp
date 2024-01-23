#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int>m;
    int arr[]={10,10,10,20,20,20,30,30,40,40};
    int n=10;
    for(int i=0;i<n;i++){
            m[arr[i]]++;
    }
    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
