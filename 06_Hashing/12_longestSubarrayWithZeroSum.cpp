#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {0, 1, 0, 1, 1, 0, 0};
    int n = 7; // Update the size of the array
    unordered_map<int, int> m;
    int prefixSum = 0;
    int maxLength = 0;

    for(int i = 0; i < n; i++) {
        // Treat zeroes as -1 and ones as 1
        if(arr[i] == 0) {
            arr[i] = -1;
        }

        prefixSum += arr[i];

        if(prefixSum == 0) {
            maxLength = i + 1;
        }

        if(m.find(prefixSum) == m.end()) {
            m.insert({prefixSum, i});
        } else {
            maxLength = max(maxLength, i - m[prefixSum]);
        }
    }

    cout << maxLength << endl;
    return 0;
}
