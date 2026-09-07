#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (auto &x : a) cin >> x;

    vector<long long> pref(n + 1, 0);
    for (int i = 0; i < n; i++)
        pref[i + 1] = pref[i] + a[i];

    long long best = LLONG_MIN;
    long long ans = 0;

    for (int r = 0; r < n; r++) {

        // Choose l = r as a possible left endpoint
        long long left = pref[r] - 1LL * r * (r + 1);
        best = max(best, left);

        // Contribution depending on r
        long long right =
            1LL * (r + 1) * (r + 2) - pref[r + 1];

        ans = max(ans, best + right);
    }

    cout << pref[n] + ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
}