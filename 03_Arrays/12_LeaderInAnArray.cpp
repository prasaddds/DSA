#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={4,9,3,1,5};
    int n=5;
    int maxx=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxx){
            maxx=arr[i];
            cout<<maxx<<" ";
        }
    }
}
