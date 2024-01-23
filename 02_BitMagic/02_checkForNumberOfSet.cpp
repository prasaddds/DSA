#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    int count=0;
    while(n>0){
        if((n&1)!=0){
            count++;
        }
        n=n/2;
    }
    cout<<count<<endl;
}
