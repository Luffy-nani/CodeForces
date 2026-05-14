#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        unordered_map<int,int> freq;
        for (int x : a)
            freq[x]++;

        int maxFreq = 0;
        for (auto &p : freq)
            maxFreq = max(maxFreq, p.second);

        if (maxFreq == n) {
            cout << 0 << '\n';
            continue;
        }

        int k = ceil(log2((double)n / maxFreq));
        int answer = (n - maxFreq) + k;

        cout << answer << '\n';
    }
}
