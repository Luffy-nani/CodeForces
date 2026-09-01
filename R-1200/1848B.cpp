#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> c(n);
    for(int i = 0; i < n; i++)
        cin >> c[i];

    map<int, vector<int>> m;

    for(int i = 0; i < n; i++) {
        m[c[i]].push_back(i);
    }

    int ans = INT_MAX;

    for(auto &p : m) {
        vector<int>& indices = p.second;

        int maxGap = 0;
        int secondGap = 0;

        // gap before first occurrence
        int gap = indices[0];
        if(gap > maxGap) {
            secondGap = maxGap;
            maxGap = gap;
        } else {
            secondGap = max(secondGap, gap);
        }

        // gaps between occurrences
        for(int i = 1; i < indices.size(); i++) {
            gap = indices[i] - indices[i-1] - 1;

            if(gap > maxGap) {
                secondGap = maxGap;
                maxGap = gap;
            } else if(gap > secondGap) {
                secondGap = gap;
            }
        }

        // gap after last occurrence
        gap = n - 1 - indices.back();

        if(gap > maxGap) {
            secondGap = maxGap;
            maxGap = gap;
        } else if(gap > secondGap) {
            secondGap = gap;
        }

        ans = min(ans, max(maxGap / 2, secondGap));
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}