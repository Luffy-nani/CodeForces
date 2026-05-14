#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < n; i++) {
            int need = n - i;        // max value for position i
            if (a[i] == need) continue;

            int j = i;
            while (a[j] != need) j++;

            reverse(a.begin() + i, a.begin() + j + 1);
            break;  // exactly one operation
        }

        for (int x : a) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
