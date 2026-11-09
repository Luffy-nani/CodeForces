#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    for (ll p = 2; ; p++) {
        bool found = false;

        for (int i = 0; i < n; i++) {
            if (gcd(a[i], p) == 1) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << p << '\n';
            return;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) solve();
}
