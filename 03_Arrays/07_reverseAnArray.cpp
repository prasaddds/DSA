#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50};
    int n=5;
    int j=0;
    for(int i=n-1;i>=(n/2);i--){//4, 3 , 2
        arr[j]=arr[i];
        j--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}