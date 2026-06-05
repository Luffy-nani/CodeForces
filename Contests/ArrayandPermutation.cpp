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

        vector<int> p(n), a(n), pos(n+1);

        for (int i = 0; i < n; i++) {
            cin >> p[i];
            pos[p[i]] = i;
        }

        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool ok = true;

        for (int i = 1; i < n; i++) {
            if (a[i] != a[i-1]) {
                if (pos[a[i]] < pos[a[i-1]]) {
                    ok = false;
                    break;
                }
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}
