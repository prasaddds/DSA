#include<bits/stdc++.h>
using namespace std;
void naivePartitionUsingTempArray(int arr[],int n,int partitionAlong){
    int temp[n];
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=arr[partitionAlong]){
            temp[j]=arr[i];
            cout<<temp[j]<<" "<<endl;
            j++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>arr[partitionAlong]){
            temp[j]=arr[i];
            j++;
        }
    }
        for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
}
int main(){
    int arr[]={100,8,6,12,10,7};//7
    int n=6;
    naivePartitionUsingTempArray(arr,n,5);
    return 0;
}
