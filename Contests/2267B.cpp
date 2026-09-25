#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    map<int, int, greater<int>> mp;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }

    vector<int> ans;
    while (!mp.empty()) {
        vector<int> remove;

        for (auto &[x, cnt] : mp) {
            ans.push_back(x);
            cnt--;

            if (cnt == 0)
                remove.push_back(x);
        }

        for (int x : remove)
            mp.erase(x);
    }

    for (int x : ans)
        cout << x << ' ';

    cout << '\n';
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