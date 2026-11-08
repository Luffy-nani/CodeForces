
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<ll>a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int l = 0;
    int ans = 0;
    int count = 1;

    for(int r = 1; r < n; r++) {
        if(a[r - 1] >= 2 * a[r]) {
            l = r;
            count = 1;
        }
        else {
            count++;

            if(count == k + 1) {
                ans++;
                l++;
                count--;
            }
        }
    }

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) solve();
}
