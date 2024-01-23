#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={3,2,8,15,-8};
    int n=5;
    int sum=17;
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        if(s.find(sum-arr[i])!=s.end()){
            cout<<"Elements found"<<endl;
            break;
        }
        else{
            s.insert(arr[i]);
        }
    }
}
