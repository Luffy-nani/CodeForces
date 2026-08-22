#include <bits/stdc++.h>
using namespace std;

#define MOD (ll)(1e9+7)

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];

    sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());

    long long ans=1;
    for(int i=0;i<n;i++){
        auto it=upper_bound(a.begin(),a.end(),b[i]);
        int count=a.end()-it;

        ans=ans*max(count-i,0LL);
    }
    ans=ans%MOD;
    cout<<ans<<'\n';
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