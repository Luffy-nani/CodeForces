#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long k, x;
    cin >> k >> x;

    // Total emotes in the entire triangle
    if (x > k * k) {
        cout << 2 * k - 1 << '\n';
        return;
    }

    // First half: 1 + 2 + ... + mid
    long long l = 1, h = k;

    while (l < h) {
        long long mid = l + (h - l) / 2;

        long long sum = mid * (mid + 1) / 2;

        if (sum >= x)
            h = mid;
        else
            l = mid + 1;
    }

    if (l * (l + 1) / 2 >= x) {
        cout << l << '\n';
        return;
    }

    // We need all k elements of the increasing part
    x -= k * (k + 1) / 2;

    // Decreasing part: k-1, k-2, ..., 1
    l = 1;
    h = k - 1;

    while (l < h) {
        long long mid = l + (h - l) / 2;

        long long sum = mid * (2 * k - 1 - mid) / 2;

        if (sum >= x)
            h = mid;
        else
            l = mid + 1;
    }

    cout << k + l << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
}