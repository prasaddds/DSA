#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={8,3,1,5,-6,6,2,2};
    int n=8;
    unordered_map<int,int> m;
    int prefixSum=0;
    int sum=4;
    int maxLength=0;
    for(int i=0;i<n;i++){
        prefixSum+=arr[i];
        if(prefixSum==sum){
            maxLength=i+1;
        }
        if(m.find(prefixSum-sum)==m.end()){
            m.insert({prefixSum,i});
        }
        else(m.find(prefixSum-sum)!=m.end()){
            maxLength=max(maxLength,i-m[prefixSum-sum]);
        }
    }
    cout<<maxLength<<endl;
}
