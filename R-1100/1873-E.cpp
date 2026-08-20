#include <bits/stdc++.h>
using namespace std;

long long calculateWater(vector<int>& a, int n, long long mid)
{
    long long sum = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] < mid)
            sum += mid - a[i];
    }

    return sum;
}

void solve() {
    int n;
    long long x;
    cin >> n >> x;

    vector<int> a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    long long low = 0;
    long long high = *max_element(a.begin(), a.end()) + x;

    while(low <= high) {
        long long mid = low + (high - low) / 2;

        long long water = calculateWater(a, n, mid);

        if(water <= x) {
            // We can achieve this height.
            // Try for a higher answer.
            low = mid + 1;
        }
        else {
            // Too much water required.
            high = mid - 1;
        }
    }

    cout << high << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}