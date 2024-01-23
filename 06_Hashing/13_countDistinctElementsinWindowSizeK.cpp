#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 1, 2, 1, 2};
    int k = 3, n = 6;
    unordered_map<int, int> m;

    for (int i = 0; i < k; i++) {
        m[arr[i]]++;
    }
    cout << m.size() << " ";
    int j=0;
    for (int i = k; i < n; i++) {
        int count = m[arr[j]]--; // Decrement count for the element moving out of the window

        if (count == 1) {
            m.erase(arr[j]); // Remove the element if count becomes 0
        }

        m[arr[i]]++; // Increment count for the new element coming into the window
        cout << m.size() << endl;
        j++;
    }

    return 0;
}
