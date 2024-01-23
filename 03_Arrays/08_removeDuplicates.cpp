#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={10,10,10,20,20,30,30};
    int n=7;
    int k=0;
    for(int i=1;i<n;i++){
        if(arr[k]!=arr[i]){
            k++;
            arr[k]=arr[i];
        }
    }
    for(int i=0;i<=k;i++){
        cout<<arr[i]<<" ";
    }
}
