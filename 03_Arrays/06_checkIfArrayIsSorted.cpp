#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={10,20,15,20,25};
    int n=5;
    bool flag=false;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            flag=true;
            cout<<"Array is not sorted"<<endl;
            break;
        }
    }
    if(flag==false){
        cout<<"Array is sorted"<<endl;
    }
}
