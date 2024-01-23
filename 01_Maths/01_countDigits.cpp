#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    int duplicate=n;
    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    cout<<"Number of digits in "<<duplicate<<" are "<<count<<endl;
}
