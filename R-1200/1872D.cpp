#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, x, y;
    cin >> n >> x >> y;

    long long count1 = (n / x) - (n / lcm(x, y));
    long long count2 = (n / y) - (n / lcm(x, y));

    long long positive = count1 * (2 * n - count1 + 1) / 2;
    long long negative = count2 * (count2 + 1) / 2;

    cout << positive - negative << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while (t--)
        solve();
}