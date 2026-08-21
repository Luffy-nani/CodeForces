#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, a, b;
    cin >> n >> k >> a >> b;

    vector<long long> x(n), y(n);

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    // Directly travel from a to b
    long long cost_ab =
        abs(x[a - 1] - x[b - 1]) +
        abs(y[a - 1] - y[b - 1]);

    // Cheapest way from a to any special city
    long long cost_a = LLONG_MAX;

    // Cheapest way from b to any special city
    long long cost_b = LLONG_MAX;

    for (int i = 0; i < k; i++) {
        cost_a = min(cost_a,
                     abs(x[a - 1] - x[i]) +
                     abs(y[a - 1] - y[i]));

        cost_b = min(cost_b,
                     abs(x[b - 1] - x[i]) +
                     abs(y[b - 1] - y[i]));
    }

    // Either go directly, or:
    // a -> special city -> special city -> b
    long long ans = min(cost_ab, cost_a + cost_b);

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