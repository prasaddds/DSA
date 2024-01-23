#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={12,15,2,19,5};
    int n=5;
    int largest=arr[0];
    int secondLargest=INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            secondLargest=largest;//12
            largest=arr[i];//15
        } 
        else if(arr[i]>secondLargest && arr[i]<largest){
            secondLargest=arr[i];
        }
    }
    cout<<secondLargest<<endl;
}
