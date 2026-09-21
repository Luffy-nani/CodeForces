#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    if (is_sorted(s.begin(), s.end())) {
        cout << 0 << '\n';
        return;
    }

    // If first character is 1, it can never become 0.
    // Therefore all zeros have to become 1.
    if (s[0] == '1') {
        cout << count(s.begin(), s.end(), '0') << '\n';
        return;
    }

    vector<int> prefix1(n + 1, 0);
    vector<int> suffix0(n + 1, 0);

    // number of 1s in [0, i-1]
    for (int i = 0; i < n; i++) {
        prefix1[i + 1] = prefix1[i] + (s[i] == '1');
    }

    // number of 0s in [i, n-1]
    for (int i = n - 1; i >= 0; i--) {
        suffix0[i] = suffix0[i + 1] + (s[i] == '0');
    }

    int ans = n;

    for (int i = 0; i <= n; i++) {
        int cur = prefix1[i] + suffix0[i];
        ans = min(ans, cur);
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}