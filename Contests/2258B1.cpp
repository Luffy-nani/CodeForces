#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m;
    cin >> n >> m;

    vector<long long> a(n);
    unordered_map<long long, long long> freq;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    long long ans = n;

    // Try x = a[i] / 2 for every even-valued a[i]
    for (auto &p : freq) {
        long long val = p.first;

        if (val % 2 == 0) {
            long long x = val / 2;

            // Count all elements >= x
            long long cnt = 0;
            for (auto &q : freq) {
                if (q.first >= x)
                    cnt += q.second;
            }

            // Elements of length 2*x give one EXTRA x
            cnt += freq[val];

            ans = max(ans, cnt);
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
}