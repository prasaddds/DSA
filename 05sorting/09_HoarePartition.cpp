#include<bits/stdc++.h>
using namespace std;
void hoarePartition(int arr[],int n){
    int i=-1,j=n;
    int pivot=5;
    while(true){
        do{
            i++;
            cout<<i<<" ";
        }
        while(arr[i]<=pivot);
        cout<<"i"<<" ";
        do{
            j--;
            cout<<j<<" ";
        }
        while(arr[j]>=pivot);
        cout<<"hello"<<endl;
        swap(arr[i],arr[j]);
        if(i>j){
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={5,3,8,4,2,7,11,10};
    int n=8;
    hoarePartition(arr,n);
    return 0;
}
