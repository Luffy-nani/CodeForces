#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long w;
    cin >> n >> w;

    multiset<long long> s;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        s.insert(x);
    }

    int ans = 0;
    long long remaining = w;

    while (!s.empty()) {
        auto it = s.upper_bound(remaining);

        if (it == s.begin()) {
            // Nothing fits
            ans++;
            remaining = w;
            continue;
        }

        --it;  // largest element <= remaining

        remaining -= *it;
        s.erase(it);
    }

    ans++; // last box
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