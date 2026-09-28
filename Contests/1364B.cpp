#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];

    // Remove consecutive duplicates
    vector<int> a;

    for (int x : p) {
        if (a.empty() || a.back() != x)
            a.push_back(x);
    }

    n = a.size();

    if (n == 1) {
        cout << 1 << '\n';
        cout << a[0] << '\n';
        return;
    }

    vector<int> ans;

    ans.push_back(a[0]);

    bool inc = a[1] > a[0];

    for (int i = 1; i < n - 1; i++) {

        if (a[i + 1] > a[i] && inc == false) {
            // decreasing -> increasing
            ans.push_back(a[i]);
            inc = true;
        }
        else if (a[i + 1] < a[i] && inc == true) {
            // increasing -> decreasing
            ans.push_back(a[i]);
            inc = false;
        }
    }

    ans.push_back(a[n - 1]);

    cout << ans.size() << '\n';

    for (int x : ans)
        cout << x << " ";

    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
}