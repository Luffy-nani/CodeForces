#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;

        // Case 1: 1 is available
        if (x != 1) {
            cout << "YES\n";
            cout << n << "\n";
            for (int i = 0; i < n; i++)
                cout << 1 << " ";
            cout << "\n";
        }
        // Case 2: 1 is not available
        else {
            // Even n: need 2
            if (n % 2 == 0 && k >= 2) {
                cout << "YES\n";
                cout << n / 2 << "\n";
                for (int i = 0; i < n / 2; i++)
                    cout << 2 << " ";
                cout << "\n";
            }
            // Odd n: need 3
            else if (n % 2 == 1 && k >= 3) {
                cout << "YES\n";
                cout << 1 + (n - 3) / 2 << "\n";
                cout << 3 << " ";
                for (int i = 0; i < (n - 3) / 2; i++)
                    cout << 2 << " ";
                cout << "\n";
            }
            // Impossible
            else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
