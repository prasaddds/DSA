// #include <iostream>
// #include <cmath>
// using namespace std;


// int normalMaxSum(int arr[], int n)
// {
// 	int res = arr[0];

// 	int maxEnding = arr[0];

// 	for(int i = 1; i < n; i++)
// 	{
// 		maxEnding = max(maxEnding + arr[i], arr[i]);

// 		res = max(maxEnding, res);
// 	}
	
// 	return res;
// }

// int overallMaxSum(int arr[], int n)
// {
// 	int max_normal = normalMaxSum(arr, n);

// 	if(max_normal < 0)
// 		return max_normal;

// 	int arr_sum = 0;

// 	for(int i = 0; i < n; i++)
// 	{
// 		arr_sum += arr[i];

// 		arr[i] = -arr[i];
// 	}

// 	int max_circular = arr_sum + normalMaxSum(arr, n);

// 	return max(max_circular, max_normal);
// }



// int main() {
	
//      int arr[] = {8, -4, 3, -5, 4}, n = 5;

//      cout<<overallMaxSum(arr, n);
    
// }

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxEnding = nums[0];
        int maxSoFar = nums[0];
        int minEnding = nums[0];
        int minSoFar = nums[0];
        int totalSum = nums[0];

        for (int i = 1; i < nums.size(); ++i) {
            totalSum += nums[i];

            maxEnding = max(nums[i], maxEnding + nums[i]);
            maxSoFar = max(maxSoFar, maxEnding);

            minEnding = min(nums[i], minEnding + nums[i]);
            minSoFar = min(minSoFar, minEnding);
        }
        if (maxSoFar <= 0) {
            return maxSoFar;
        }
        return max(maxSoFar, totalSum - minSoFar);
    }
};
