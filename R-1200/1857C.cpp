#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    vector<long long> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    vector<long long> dup = a;
    sort(dup.begin(), dup.end());

    long long l = 0;
    long long r = n - 1;

    long long ldup = 0;
    long long rdup = n - 1;

    while(l < r) {

        if(a[l] == dup[ldup]) {
            l++;
            ldup++;
        }
        else if(a[l] == dup[rdup]) {
            l++;
            rdup--;
        }
        else if(a[r] == dup[ldup]) {
            r--;
            ldup++;
        }
        else if(a[r] == dup[rdup]) {
            r--;
            rdup--;
        }
        else {
            break;
        }
    }

    if(l >= r)
        cout << -1 << '\n';
    else
        cout << l + 1 << " " << r + 1 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while(t--)
        solve();
}