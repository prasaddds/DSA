#include <iostream>
using namespace std;

int euclidian(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return euclidian(b, a % b);
    }
}

int main() {
    int m, n;
    cout << "Enter values of m and n" << endl;
    cin >> m >> n;
    cout << "GCD: " << euclidian(m, n) << endl;
    return 0;
}
