#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<vector<int>> a(n, vector<int>(n));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int count = 0;

    // Only top half of the rows
    for(int i = 0; i < n / 2; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] != a[n - 1 - i][n - 1 - j]) {
                count++;
            }
        }
    }

    // If mismatches themselves need more operations than k
    if(count > k) {
        cout << "NO\n";
        return;
    }

    // Even n -> remaining operations must be even
    // Odd n -> center cell allows an odd leftover
    if(n % 2 == 0 && (k - count) % 2 != 0) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}