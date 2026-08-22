#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<ll> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    vector<ll> prefixSum(n + 1, 0);

    for (int i = 0; i < n; i++) {
        prefixSum[i + 1] = prefixSum[i] + a[i];
    }

    ll ans = 0;

    for (int i = 0; i <= k; i++) {

        // i times: remove 2 smallest
        // k-i times: remove 1 largest

        int left = 2 * i;
        int right=n-k+i;
    
        ll sum = prefixSum[right] - prefixSum[left];

        ans = max(ans, sum);
    }

    cout << ans << '\n';
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