#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m;
    cin >> n >> m;

    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    unordered_map<long long, long long> rem;

    // Count frequencies of remainders
    for(int i = 0; i < n; i++) {
        rem[a[i] % m]++;
    }

    long long ans = 0;

    for(int i = 0; i < m; i++) {
        long long x = rem[i];
        long long y = rem[(m - i) % m];

        if(x == 0 && y == 0)
            continue;

        // Same remainder: 0 or m/2
        if(i == (m - i) % m) {
            ans++;
        }
        else {
            ans += max(1LL, abs(x - y));
        }

        rem[i] = 0;
        rem[(m - i) % m] = 0;
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}