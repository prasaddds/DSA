#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,4,13,-3,-10,5};
    int n=6;
    int sum=0;
    unordered_set<int> s;
    int prefix_sum=0;
    for(int i=0;i<n;i++){
        prefix_sum=prefix_sum+arr[i];
        if(prefix_sum==0){
            cout<<"Found"<<endl;
            break;
        }
        if(s.find(prefix_sum)!=s.end()){
            cout<<"Found"<<endl;
            break;
        }
        else{
            s.insert(prefix_sum);
        }
    }
}
