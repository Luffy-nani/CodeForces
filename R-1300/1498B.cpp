#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<long long>& a, vector<bool>& used, long long w) {
    // a is sorted in decreasing order
    // find the largest unused element <= w

    int low = 0;
    int high = a.size() - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] > w) {
            low = mid + 1;
        }
        else {
            // a[mid] <= w
            // but it may already be used

            if (!used[mid])
                ans = mid;

            // We want a larger value, so search left
            high = mid - 1;
        }
    }

    // If the binary search landed on used elements,
    // we may need to look around for an unused one.
    if (ans != -1)
        return ans;

    return -1;
}

void solve() {
    int n;
    long long w;
    cin >> n >> w;

    vector<long long> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.rbegin(), a.rend());

    vector<bool> used(n, false);

    int count = n;
    int ans = 0;

    long long remaining = w;

    while (count > 0) {

        int idx = binarySearch(a, used, remaining);

        if (idx == -1) {
            // Nothing can fit in the current box
            ans++;
            remaining = w;
        }
        else {
            // Put this item in the current box
            remaining -= a[idx];
            used[idx] = true;
            count--;
        }
    }

    // Count the last box
    ans++;

    cout << ans << '\n';
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