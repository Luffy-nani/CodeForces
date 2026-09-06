#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int q;
    cin >> q;

    vector<int> diff;
    diff.push_back(0);

    int j = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] != a[j]) {
            diff.push_back(i);
            j = i;
        }
    }

    while (q--) {
        int l, r;
        cin >> l >> r;

        l--;
        r--;

        // Find first diff position > l
        int low = 0;
        int high = diff.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (diff[mid] > l)
                high = mid - 1;
            else
                low = mid + 1;
        }

        // low = first position in diff that is > l

        if (low < diff.size() && diff[low] <= r) {
            cout << l + 1 << " " << diff[low] + 1 << '\n';
        }
        else {
            cout << -1 << " " << -1 << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}