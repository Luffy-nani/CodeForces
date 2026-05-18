#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;

         int keep1 = 0; // best length if we already used '1'
    int keep3 = 0; // best length if we already used '3'
    int keep2 = 0; // best length using only '2's

    for (char c : s) {

        // never keep 4
        if (c == '4') continue;

        if (c == '2') {
            // 2 cannot come after 1 or 3
            keep2++;
        }

        else if (c == '1') {
            // once we take 1, later 2 becomes invalid
            keep1 = max(keep1, keep2) + 1;
        }

        else if (c == '3') {
            // once we take 3, later 2 becomes invalid
            keep3 = max(keep3, keep2) + 1;
        }
    }

    int best = max({keep1, keep2, keep3});

    cout << s.size() - best << endl;
    }
    return 0;
}
