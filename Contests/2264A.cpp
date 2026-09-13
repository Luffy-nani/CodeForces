#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> p(n);
    for(int i = 0; i < n; i++) {
        cin >> p[i];
    }

    vector<int> misplaced;

    for(int i = 0; i < n; i++) {
        if(p[i] != i + 1)
            misplaced.push_back(p[i]);
    }

    reverse(misplaced.begin(), misplaced.end());

    int count = 0;

    for(int i = 0; i < n; i++) {
        if(p[i] != i + 1) {
            p[i] = misplaced[count];
            count++;
        }
    }

    if(is_sorted(p.begin(), p.end()))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}