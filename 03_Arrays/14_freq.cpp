// #include <iostream>
// #include <cmath>
// using namespace std;


// void printFreq(int arr[], int n)
// {
// 	int freq = 1, i = 1;

// 	while(i < n)
// 	{
// 		while(i < n && arr[i] == arr[i - 1])
// 		{
// 			freq++;
// 			i++;
// 		}

// 		cout<<arr[i - 1] << " " << freq << endl;

// 		i++;
// 		freq = 1;
// 	}
// 	if(n==1 || arr[n-1]!=arr[n-2])
// 	    cout<<arr[n-1] + " " + 1;
// }


// int main() {
	
//       int arr[] = {10, 10, 20, 30, 30, 30}, n = 6;

//       printFreq(arr, n);
    
// }

#include <iostream>
#include <vector>
#include <unordered_set>

int findMissingNumber(const std::vector<int>& nums) {
    std::unordered_set<int> numSet(nums.begin(), nums.end());

    int n = nums.size() + 1;

    for (int i = 1; i <= n; ++i) {
        if (numSet.find(i) == numSet.end()) {
            return i;
        }
    }

    return n;
}

int main() {
    std::vector<int> arr = {-3, -1, 0, 1, 2, 4, 5, 6};
    int missingNum = findMissingNumber(arr);
    std::cout << "The missing number is: " << missingNum << std::endl;

    return 0;
}
