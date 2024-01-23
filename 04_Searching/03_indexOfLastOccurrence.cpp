#include<bits/stdc++.h>
using namespace std;
int indexOfLastOccurrence(int arr[],int n,int x){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            low=mid+1;
            if(arr[low]!=x){
                return low;
            }
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={5,10,10,10,10,20,20};
    int n=7;
    int x=10;
    cout<<indexOfLastOccurrence(arr,n,x)<<endl;
    return 0;
}
