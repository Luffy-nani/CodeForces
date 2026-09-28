#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    for (long long k = 2; k <= 1000; k++) {
        long long sum = 1 + k;
        long long power = k * k;

        while (sum + power <= n) {
            sum += power;

            if (sum == n) {
                cout << "YES\n";
                return;
            }

            power *= k;
        }
    }

    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
}