#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,capacity;
    cout<<"Enter capacity of an array"<<endl;
    cin>>capacity;
    cout<<"Enter number of elements u wanna insert in an array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x,position;
    cout<<"Enter value and position"<<endl;
    cin>>x>>position;
    if(n==capacity){
        cout<<"U cannot insret an element"<<endl;
    }
    else{
        int i;
        for(i=n;i>=position;i--){
            arr[i+1]=arr[i];
        }
        arr[i]=x;
    }
    n=n+1;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
