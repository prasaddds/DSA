#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    int i=2;
    for(i=2;i*i<n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    for(;i>=0;i--){
        if(n%i==0){
            cout<<n/i<<" ";
        }
    }
}
