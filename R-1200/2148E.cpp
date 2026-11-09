#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    unordered_map<int, int> freq;
    for (int x : a) freq[x]++;

    for (auto &p : freq) {
        if (p.second % k != 0) {
            cout << 0 << '\n';
            return;
        }
    }

    unordered_map<int, int> used;

    int l = 0;
    ll ans = 0;

    for (int r = 0; r < n; r++) {
        used[a[r]]++;

        while (used[a[r]] > freq[a[r]] / k) {
            used[a[l]]--;
            l++;
        }

        ans += (r - l + 1);
    }

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) solve();
}
