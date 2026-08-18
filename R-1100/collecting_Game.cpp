#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<pair<long long, int>> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(a.begin(), a.end());

    vector<int> ans(n);

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i].first;
    }

    ans[n - 1] = n - 1;

    for (int i = n - 2; i >= 0; i--) {
        // Remove a[i+1] from the total
        // Now sum = a[0] + ... + a[i]
        sum -= a[i + 1].first;

        if (sum >= a[i + 1].first) {
            ans[i] = ans[i + 1];
        } else {
            ans[i] = i;
        }
    }

    vector<int> final_ans(n);

    for (int i = 0; i < n; i++) {
        int originalIndex = a[i].second;
        final_ans[originalIndex] = ans[i];
    }

    for (int i = 0; i < n; i++) {
        cout << final_ans[i] << " ";
    }

    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}