#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, c;
    cin >> n >> c;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> total(n);

    for(int i = 0; i < n; i++)
        total[i] = a[i] + i + 1;

    sort(total.begin(), total.end());

    int count = 0;

    for(int i = 0; i < n; i++) {
        if(c < total[i])
            break;

        c -= total[i];
        count++;
    }

    cout << count << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}