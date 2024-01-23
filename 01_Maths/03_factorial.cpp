#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    int fact=1;
    for(int i=2;i<=n;i++){
        fact=fact*i;
    }
    cout<<"factorial of number "<<n<<" is "<<fact<<endl;
}