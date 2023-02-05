#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int a[n], b[n];
        int amax = 0, amin = 1e9;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            amax = max(amax, a[i]);
            amin = min(amin, a[i]);
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        for (int i = 0; i < n; i++) {
            if (amax - b[i] > amax - amin) {
                amax = b[i];
            }
            if (b[i] - amin < amax - amin) {
                amin = b[i];
            }
        }

        cout << amax - amin << endl;
    }
    return 0;
}
