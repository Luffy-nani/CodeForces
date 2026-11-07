
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n), b(n);

    for (ll i = 0; i < n; i++) cin >> a[i];
    for (ll i = 0; i < n; i++) cin >> b[i];

    ll odd_a = 0, odd_b = 0;

    for (ll i = 0; i < n; i++) {
        if (a[i] % 2 != 0) odd_a++;
        if (b[i] % 2 != 0) odd_b++;
    }

    if (k % 2 == 0) {
        cout << (odd_b <= odd_a ? "YES\n" : "NO\n");
    }
    else {
        cout << (odd_b >= odd_a ? "YES\n" : "NO\n");
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}
