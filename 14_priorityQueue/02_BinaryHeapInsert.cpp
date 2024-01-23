#include<bits/stdc++.h>
using namespace std;
struct MyHeap{
    int *arr;
    int capacity;
    int size;
    MyHeap(int c){
        capacity=c;
        arr=new int[c];
        size=0;
    }
    int parent(int i){
        return (i-1)/2;
    }
    void insert(int x){
        if(size==capacity){
            cout<<"Heap is full"<<endl;
            return;
        }
        size++;
        arr[size-1]=x;
        for(int i=size-1;i!=0 && arr[parent(i)]>arr[i];){
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
        cout<<"The capacity of heap after inserting an element is "<<size<<endl;
    }
    void printElements(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    MyHeap MH(105);
    MH.insert(10);
    MH.insert(20);
    MH.insert(30);
    MH.insert(40);
    MH.printElements();
    return 0;
}
