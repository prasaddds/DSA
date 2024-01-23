#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    int count=0,duplicate=n;
    for(int i=5;i<=n;i*=5){
        if(n/i >= 0){
            count=count+(n/i);
            n=n/i;
        }
    }
    cout<<"Number of zeroes in "<<duplicate<<" factorial are "<<count<<endl;
}
