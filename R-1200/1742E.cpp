#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;

    vector<long long> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    // {query, original index}
    vector<pair<long long, int>> queries(q);

    for (int i = 0; i < q; i++) {
        cin >> queries[i].first;
        queries[i].second = i;
    }

    // Process smaller queries first
    sort(queries.begin(), queries.end());

    vector<long long> ans(q);

    int lastIndex = 0;
    long long height = 0;

    for (auto &[k, idx] : queries) {

        // We can climb this step if a[lastIndex] <= k
        while (lastIndex < n && a[lastIndex] <= k) {
            height += a[lastIndex];
            lastIndex++;
        }

        ans[idx] = height;
    }

    // Print answers in original query order
    for (int i = 0; i < q; i++)
        cout << ans[i] << " ";

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