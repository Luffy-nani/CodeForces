#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, x, m;
    cin >> n >> x >> m;

    long long f_l = x;
    long long f_r = x;

    for (int i = 0; i < m; i++) {
        long long l, r;
        cin >> l >> r;

        if (l <= f_r && r >= f_l) {
            f_l = min(f_l, l);
            f_r = max(f_r, r);
        }
    }

    cout << f_r - f_l + 1 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
}