#include <bits/stdc++.h>
using namespace std;

long long diffOfTrucks(vector<long long>& prefixSum, int numberOfTrucks) {
    int n = prefixSum.size() - 1;
    int boxesPerTruck = n / numberOfTrucks;

    long long maxi = LLONG_MIN;
    long long mini = LLONG_MAX;

    for (int i = 0; i < numberOfTrucks; i++) {
        int l = i * boxesPerTruck;
        int r = l + boxesPerTruck;

        long long sum = prefixSum[r] - prefixSum[l];

        maxi = max(maxi, sum);
        mini = min(mini, sum);
    }

    return maxi - mini;
}

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<long long> prefixSum(n + 1, 0);

    for (int i = 0; i < n; i++)
        prefixSum[i + 1] = prefixSum[i] + a[i];

    long long ans = 0;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {

            // i = number of trucks
            ans = max(ans, diffOfTrucks(prefixSum, i));

            // n/i = number of trucks
            if (i != n / i) {
                ans = max(ans, diffOfTrucks(prefixSum, n / i));
            }
        }
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