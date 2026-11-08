#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n, m, h;
    cin >> n >> m >> h;

    vector<ll> a(n), temp(n);
    vector<ll> last(n, -1);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        temp[i] = a[i];
    }

    ll lastReset = -1;

    for(int i = 0; i < m; i++) {
        ll b, c;
        cin >> b >> c;
        b--;

        if(last[b] < lastReset) {
            a[b] = temp[b];
        }

        a[b] += c;

        if(a[b] > h) {
            lastReset = i;
            a[b] = temp[b];
        }

        last[b] = i;
    }

    for(int i = 0; i < n; i++) {
        if(last[i] < lastReset) {
            cout << temp[i] << " ";
        }
        else {
            cout << a[i] << " ";
        }
    }

    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) solve();
}
