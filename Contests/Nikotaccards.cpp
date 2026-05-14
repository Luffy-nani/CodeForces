#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        long long pos = 0;  // maximum possible k
        long long neg = 0;  // minimum possible k

        for (int i = 0; i < n; i++) {
            long long v1 = pos - a[i];
            long long v2 = neg - a[i];
            long long v3 = b[i] - pos;
            long long v4 = b[i] - neg;

            long long new_pos = max({v1, v2, v3, v4});
            long long new_neg = min({v1, v2, v3, v4});

            pos = new_pos;
            neg = new_neg;
        }

        cout << pos << "\n";
    }

    return 0;
}
