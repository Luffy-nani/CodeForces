#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    if (n <= k) {
        cout << 1 << '\n';
        return;
    }

    long long best = 1;

    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            // i is a divisor
            if (i <= k)
                best = max(best, i);

            // n/i is also a divisor
            if (n / i <= k)
                best = max(best, n / i);
        }
    }

    cout << n / best << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
}