#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n to find if it is palindarome or not"<<endl;
    cin>>n;
    int duplicate=n;
    int x=0;
    int rem=0;
    while(n>0){
        rem=n%10;
        x=(x*10)+rem;
        n/=10;
    }
    cout<<x<<endl;
    if(x==duplicate){
        cout<<"Entered number is palindrome"<<endl;
    }
    else{
        cout<<"Entered number is not palindrome"<<endl;
    }
}
