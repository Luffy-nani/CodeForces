#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    if(k < n || k > 2*n - 1) {
        cout << -1 << '\n';
        return;
    }

    int diff = 2*n - k;

    vector<vector<int>> a(n, vector<int>(n));

    for(int i = 0; i < diff; i++)
        a[i][i] = i + 1;

    int count = diff + 1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] == 0)
                a[i][j] = count++;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}