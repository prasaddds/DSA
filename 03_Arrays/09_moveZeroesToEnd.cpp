#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={10,0,10,2,0,0,20};
    int n=7;
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[k]=arr[i];
            k++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
