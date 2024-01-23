#include<bits/stdc++.h>
using namespace std;
void LomutoPartition(int arr[],int n,int pivot){
    int k=-1,i=0;
    for(i=0;i<n;i++){
        if(arr[i]<pivot){
            k++;
            swap(arr[k],arr[i]);
        }
    }
    swap(arr[i-1],arr[k]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={10,80,30,90,40,50,70};
    int pivot=70;
    int n=7;
    LomutoPartition(arr,n,pivot);
    return 0;
}
