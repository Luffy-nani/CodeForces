#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    bool present[26] = {};
    int distinct = 0;

    // Find all distinct characters
    for(char c : s) {
        if(!present[c - 'a']) {
            present[c - 'a'] = true;
            distinct++;
        }
    }

    vector<int> last(26, -1);

    for(int i = 0; i < s.size(); i++) {
        int c = s[i] - 'a';

        if(last[c] != -1) {

            bool seen[26] = {};

            // Characters between the two same characters
            for(int j = last[c] + 1; j < i; j++) {
                seen[s[j] - 'a'] = true;
            }

            // Every OTHER distinct character must be present
            for(int x = 0; x < 26; x++) {
                if(present[x] && x != c && !seen[x]) {
                    cout << "NO\n";
                    return;
                }
            }
        }

        last[c] = i;
    }

    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}