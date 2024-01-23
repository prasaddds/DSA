#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    int k;
    cout<<"Enter value of k to check if that bit in "<<n<<" is set or not"<<endl;
    cin>>k;
    int x=1<<k-1;
    if((n&x)!=0){
        cout<<k<<" th bit is set in "<<n<<endl;
    }
    else{
        cout<<k<<" th bit is unset in "<<n<<endl;
    }
}
