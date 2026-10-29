#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<long long> a(n);
    a[0] = 1;

    for (int i = 1; i < n; i++) cin >> a[i];

    vector<long long> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];

    sort(b.begin(), b.end());

    multiset<long long> ms(a.begin(), a.end());

    int ans = 0;

    for (int i = 0; i < n; i++) {
        auto it = ms.lower_bound(b[i]);

        if (it != ms.begin()) {
            --it;
            ms.erase(it);
        } else {
            ans++;
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}
