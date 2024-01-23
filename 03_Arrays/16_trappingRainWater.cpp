#include <iostream>
#include <cmath>
using namespace std;


int getWater(int arr[], int n)
{
	int res = 0;

	for(int i = 1; i < n - 1; i++)
	{
		int res = 0;

    	int lMax[n];
    	int rMax[n];

    	lMax[0] = arr[0];
    	for(int i = 1; i < n; i++)
    		lMax[i] = max(arr[i], lMax[i - 1]);


    	rMax[n - 1] = arr[n - 1];
    	for(int i = n - 2; i >= 0; i--){ 
    		rMax[i] = max(arr[i], rMax[i + 1]);
			cout<<rMax[i]<<" ";} cout<<endl;

    	for(int i = 1; i < n - 1; i++)
    		res = res + (min(lMax[i], rMax[i]) - arr[i]);
    	
		for(int i=0;i<n;i++){
			cout<<lMax[i]<<" ";
		}
		cout<<endl;
		for(int i=0;i<n;i++){
			cout<<rMax[i]<<" ";
		}
    	return res;
	}

	return res;
}


int main() {
	
     int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1}, n = 12;

     cout<<getWater(arr, n);
    
}