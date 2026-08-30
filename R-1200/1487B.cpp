#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    k--; // 0-indexed hour count
    long long ans;
    if (n % 2 == 0) {
        ans = k % n + 1;
    } else {
        long long half = n / 2;
        ans = (k + k / half) % n + 1;
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while(t--)
        solve();
}