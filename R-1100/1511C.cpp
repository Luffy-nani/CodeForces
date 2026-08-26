#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, queries;
    cin >> n >> queries;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> t(queries);
    for(int i = 0; i < queries; i++)
        cin >> t[i];

    queue<int> qu;

    for(int i = 0; i < n; i++)
        qu.push(a[i]);

    for(int i = 0; i < queries; i++) {
        int count = 1;

        while(qu.front() != t[i]) {
            int x = qu.front();
            qu.pop();
            qu.push(x);
            count++;
        }

        cout << count << " ";
    }

    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}