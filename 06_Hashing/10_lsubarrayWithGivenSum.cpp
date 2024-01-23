#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,8,6,13,3,-1};
    int n=6;
    int sum=22;
    unordered_set<int> s;
    int prefix=0;
    for(int i=0;i<n;i++){
        prefix+=arr[i];
        if(prefix==sum){
            cout<<"subarray with given sum found"<<endl;
            break;
        }
        if(s.find(prefix-sum)!=s.end()){
            cout<<"Found"<<endl;
        }
        s.insert(prefix);
    }
}
