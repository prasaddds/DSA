#include <iostream>
using namespace std;

int search(int nums[], int n, int target)
{
       int left = 0, right = n-1;
       
    while (left <= right) {
        
        int mid = left + (right - left) / 2;
        
        if (nums[ mid ] == target) return mid;
        
        else if (nums[ left ] <= nums[ mid ]) {
            
            // left array sorted
            if (nums[ left ] <= target && target < nums[ mid ]) right = mid - 1;
            
            else if (nums[ left ] == target) return left;
            
            else left = mid + 1;
            
        } 
        else {
            // right array sorted
            if (nums[ mid ] < target && target <= nums[ right ]) left = mid + 1;
            
            else if (nums[ right ] == target) return right;
            
            else right = mid - 1;
        }
    }
    return -1;
}
int main() {
    

  int arr[] = {1,0,1,1,1}, n = 5;
  
  int x = 0;

	cout << search(arr, n, x);

	return 0;
}