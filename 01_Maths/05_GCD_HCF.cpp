#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter value of m and n"<<endl;
    cin>>m>>n;
    int lowest=min(m,n);
    for(int i=lowest;i>=1;i--)
    {
        if(m%i==0 && n%i==0){
            cout<<"GCD of "<<m<<" and n is "<<i<<endl;
            break;
        }
    }
}
