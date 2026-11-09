#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve() {
    int n;
    cin>>n;

    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    vector<int>count(32,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<32;j++){
            if((a[i]>>j)&1)count[j]++;
        }
    }

    ll ans=0;

    for(int i=0;i<n;i++){
        ll sum=0;
        for(int j=0;j<32;j++){
            if((a[i]>>j)&1)sum+=(n-count[j])*(1LL<<j);
            else sum+=count[j]*(1LL<<j);
        }

        ans=max(ans,sum);
    }

    cout<<ans<<'\n';
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while(t--)
        solve();
}
