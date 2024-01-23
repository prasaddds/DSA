#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums[]={1,12,-5,-6,50,3};
    int k=4;
    int n=6;
        double sum=0;
        for(int i=0;i<k;i++){
            sum=sum+nums[i];
        }
        double average=sum/k;
        int randomVar=0;
        for(int i=k;i<n;i++){
            sum=sum+nums[i]-nums[i-k];
            if((sum/k)>=average){
                cout<<i<<endl;
                average=sum/k;
            }
            if(i==n-1)
            break;
        }
        cout<<average;
}
