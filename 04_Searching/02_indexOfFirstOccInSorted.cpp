// #include<bits/stdc++.h>
// using namespace std;
// int indexOfFirstOccurrence(int arr[],int n,int x){
//     int low=0;
//     int high=n-1;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(arr[mid]==x){
//             high=mid-1;
//             if(arr[high]!=arr[mid]){
//                 return mid;
//             }
//         }
//         else if(arr[mid]<x){
//             low=mid+1;
//         }
//         else{
//             high=mid-1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[]={5,10,10,10,20},n=5;
//     int x=10;
//     cout<<indexOfFirstOccurrence(arr,n,x)<<endl;
//     return 0;
// }
vector<int> searchRange(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;
    int left = -1, right = -1;

    // Search for left boundary
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            left = mid;
            high = mid - 1; // Continue search towards left
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    low = 0, high = nums.size() - 1;

    // Search for right boundary
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            right = mid;
            low = mid + 1; // Continue search towards right
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    vector<int> result = {left, right};
    return result;
}
