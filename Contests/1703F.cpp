#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> s;

    for (int i = 0; i < n; i++) {
        if (a[i] < i + 1)
            s.push_back(i + 1);
    }

    int m = s.size();
    long long ans = 0;

    for (int i = 0; i < m; i++) {

        // a[s[i] - 1] because s[i] is 1-based
        long long x = a[s[i] - 1];

        // Find first position where s[pos] >= x
        int low = 0;
        int high = m;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (s[mid] < x)
                low = mid + 1;
            else
                high = mid;
        }

        // low = number of s[j] < x
        ans += low;
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