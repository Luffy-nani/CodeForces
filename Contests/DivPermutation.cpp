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

        vector<int> p;

        if (n % 2 == 1) {
            // odd case
            int mid = (n + 1) / 2;
            p.push_back(mid);
            for (int i = 1; i <= n / 2; i++) {
                p.push_back(mid - i);
                p.push_back(mid + i);
            }
        } else {
            // even case
            int mid = n / 2;
            p.push_back(mid);
            p.push_back(mid + 1);

            for (int i = 1; i < mid; i++) {
                p.push_back(mid - i);
                p.push_back(mid + 1 + i);
            }
        }

        for (int x : p) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
