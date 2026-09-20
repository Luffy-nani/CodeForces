#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long x) {
    if (x < 2) return false;

    for (long long i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return false;
    }

    return true;
}

void solve() {
    int n;
    cin >> n;

    cout << (isPrime(n + 1) ? "YES\n" : "NO\n");
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