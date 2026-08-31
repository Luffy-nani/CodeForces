#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

void solve() {
    int n,k;
    cin>>n>>k;

    long long ans=pow(n,k);
    ans=ans%MOD;
    cout<<ans<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while(t--)
        solve();
}