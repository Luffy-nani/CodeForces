#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    long long ans=gcd(a[0],a[n-1]);
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