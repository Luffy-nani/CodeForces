#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, x, y;
    cin >> n >> x >> y;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<pair<long long, long long>, long long> mp;

    long long ans = 0;

    for (int i = 0; i < n; i++) {
        long long remX = a[i] % x;
        long long remY = a[i] % y;

        long long findX = (x - remX) % x;

        ans += mp[{findX, remY}];

        mp[{remX, remY}]++;
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}