#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    long long r = 0, b = 0;

    for(int i = 0; i < 2*n; i++) {
        if(s[i] == '1') {

            int j = (i + 1) % (2*n);

            if(s[j] == '0') {
                // potato moves from i -> j
                if(j % 2 == 0) b++;
                else r++;
            }
            else {
                // potato stays at i
                if(i % 2 == 0) b++;
                else r++;
            }
        }
    }

    cout << r << " " << b << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}