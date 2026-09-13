#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

long long modpow(long long a, long long b) {
    long long res = 1;

    while(b) {
        if(b & 1)
            res = res * a % MOD;

        a = a * a % MOD;
        b >>= 1;
    }

    return res;
}

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    vector<long long> suffix(n + 1, 0);

    for(int i = n - 1; i >= 0; i--) {
        suffix[i] = (suffix[i + 1] + a[i]) % MOD;
    }

    vector<long long> fact(n + 1, 1);

    for(int i = 1; i <= n; i++)
        fact[i] = fact[i - 1] * i % MOD;

    long long ans = 0;

    for(int i = 0; i < n - 1; i++) {
        long long k = n - 1 - i;

        long long sumHigher = suffix[i + 1];

        long long contribution =
            (sumHigher - (k % MOD) * (a[i] % MOD)) % MOD;

        if(contribution < 0)
            contribution += MOD;

        long long ways = fact[n - 1] * modpow(k, MOD - 2) % MOD;

        ans = (ans + contribution * ways) % MOD;
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