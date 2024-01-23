#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={12,15,2,19,3};
    int n=5;
    int largest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<largest<<endl;
}
