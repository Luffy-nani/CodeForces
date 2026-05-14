#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> freq(26, 0);
        for (char c : s) freq[c - 'a']++;

        long long odd = 0;
        for (int f : freq) odd += f % 2;

        if (odd <= k + 1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
