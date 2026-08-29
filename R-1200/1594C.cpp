#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    char c;
    cin >> n >> c;

    string s;
    cin >> s;

    bool isall = true;

    for (int i = 0; i < n; i++) {
        if (s[i] != c) {
            isall = false;
            break;
        }
    }

    if (isall) {
        cout << 0 << '\n';
        return;
    }

    if (s[n - 1] == c) {
        cout << 1 << '\n';
        cout << n << '\n';
        return;
    }

    cout << 2 << '\n';
    cout << n - 1 << " " << n << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
}