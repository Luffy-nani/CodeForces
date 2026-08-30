#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, x;
    cin >> n >> x;

    vector<long long> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    long long ans = 0;
    int count = 0;
    long long sum = 0;

    sort(a.begin(), a.end());

    // Find how many can be bought on day 0
    for(int i = 0; i < n; i++) {
        if(sum + a[i] <= x) {
            sum += a[i];
            count++;
        }
    }

    long long days = 1;

    while(count > 0) {
        // Move to next day: every chosen item costs +1
        sum += count;

        // Remove items that are no longer affordable
        while(count > 0 && sum > x) {
            sum -= a[count - 1] + days;
            count--;
        }

        if(count > 0)
            ans += count;

        days++;
    }

    cout << ans + 1 << '\n'; // day 0
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}