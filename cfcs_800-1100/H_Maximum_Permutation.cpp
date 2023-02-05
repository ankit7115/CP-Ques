#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        // Initialize the permutation with the values 1, 2, ..., n
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            a[i] = i + 1;
        }

        // Reverse the last k elements of the permutation
        reverse(a.begin() + n - k, a.end());

        // Print the maximum value and the permutation
        cout << (k * (k + 1)) / 2 << endl;
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
