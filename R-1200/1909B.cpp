#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
        cin >> a[i];

    long long ans = 0;

    for (long long i = 1; i < 60; i++) {
        long long mod = (1LL << i);

        set<long long> store;

        for (long long j = 0; j < n; j++) {
            store.insert(a[j] % mod);
        }

        if (store.size() == 2) {
            ans = mod;
            break;
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while (t--)
        solve();
}