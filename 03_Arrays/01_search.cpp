#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={10,12,13,14,15};
    int x=15;
    bool flag=false;
    for(int i=0;i<5;i++){
        if(arr[i]==x){
            flag=true;
            cout<<i<<endl;
            break;
        }
    }
    if(flag==false){
        cout<<"Element not found"<<endl;
    }
}
