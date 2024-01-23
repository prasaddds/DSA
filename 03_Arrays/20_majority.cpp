#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={3,2,3};
    int n=3;
    int res=0;
    int count=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[res]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            res=i;
            count=1;
        }
    }
    int m=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[res]){
            m++;
        }
    }
    if(m>=n/2){
        cout<<arr[res]<<endl;
    }
}