#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;

    vector<ll> a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    ll gcd_even = 0;
    ll gcd_odd = 0;

    for(int i = 0; i < n; i += 2)
        gcd_even = gcd(gcd_even, a[i]);

    for(int i = 1; i < n; i += 2)
        gcd_odd = gcd(gcd_odd, a[i]);

    bool pos = true;

    // Try gcd of even-indexed elements
    for(int i = 1; i < n; i += 2) {
        if(a[i] % gcd_even == 0) {
            pos = false;
            break;
        }
    }

    if(pos) {
        cout << gcd_even << '\n';
        return;
    }

    pos = true;

    // Try gcd of odd-indexed elements
    for(int i = 0; i < n; i += 2) {
        if(a[i] % gcd_odd == 0) {
            pos = false;
            break;
        }
    }

    if(pos)
        cout << gcd_odd << '\n';
    else
        cout << 0 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}