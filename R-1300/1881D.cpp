#include <bits/stdc++.h>
using namespace std;

void factorize(long long x, map<long long, long long>& mp) {
    for (long long i = 2; i * i <= x; i++) {
        while (x % i == 0) {
            mp[i]++;
            x /= i;
        }
    }

    if (x > 1)
        mp[x]++;
}

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);

    // This represents the PRODUCT:
    // product = a[0] * a[1] * ... * a[n-1]
    // but we store it using prime exponents.
    map<long long, long long> product;

    vector<map<long long, long long>> factors(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        factorize(a[i], factors[i]);

        for (auto [p, cnt] : factors[i]) {
            product[p] += cnt;
        }
    }

    // The product must be an n-th power.
    // This means every prime's exponent must be divisible by n.
    for (auto [p, cnt] : product) {
        if (cnt % n != 0) {
            cout << "NO\n";
            return;
        }
    }

    // --------------------------------------------------
    // Find surplus factors.
    //
    // Target exponent of prime p in EACH number:
    //
    // product[p] / n
    // --------------------------------------------------

    map<long long, long long> pool;

    for (int i = 0; i < n; i++) {

        for (auto [p, cnt] : factors[i]) {

            long long each = product[p] / n;

            if (cnt > each) {
                pool[p] += cnt - each;
            }
        }
    }

    // --------------------------------------------------
    // Find deficit factors and take them from the pool.
    // --------------------------------------------------

    for (int i = 0; i < n; i++) {

        for (auto [p, total] : product) {

            long long each = total / n;

            long long cnt = 0;

            if (factors[i].count(p))
                cnt = factors[i][p];

            if (cnt < each) {

                long long need = each - cnt;

                if (pool[p] < need) {
                    cout << "NO\n";
                    return;
                }

                pool[p] -= need;
            }
        }
    }

    cout << "YES\n";
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