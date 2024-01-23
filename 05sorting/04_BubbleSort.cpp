#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={30,10,25,5,100};
    int n=5;
    bool isFlag=false;
    for(int i=0;i<n;i++){
        isFlag=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                isFlag=true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(isFlag==false){
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
