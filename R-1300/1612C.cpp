#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long k, x;
    cin >> k >> x;

    // First half: 1,2,3,...,k
    long long l = 1, h = k;

    while (l < h) {
        long long mid = l + (h - l) / 2;

        long long sum = mid * (mid + 1) / 2;

        if (sum >= x)
            h = mid;
        else
            l = mid + 1;
    }

    // x can be reached in the increasing part
    if (l * (l + 1) / 2 >= x) {
        cout << l << '\n';
        return;
    }

    // We need the whole increasing part
    x -= k * (k + 1) / 2;

    // Now take elements from: k-1, k-2, ..., 1
    l = 1;
    h = k - 1;

    while (l < h) {
        long long mid = l + (h - l) / 2;

        // sum of first 'mid' decreasing elements
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