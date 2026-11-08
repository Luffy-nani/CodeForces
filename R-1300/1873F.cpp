#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n,k;
    cin>>n>>k;

    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];

    vector<ll>h(n);
    for(ll i=0;i<n;i++)cin>>h[i];

    vector<ll>prefixSum(n+1,0);
    for(ll i=0;i<n;i++)prefixSum[i+1]=prefixSum[i]+a[i];

    ll l=0;
    ll ans=0;

    for(ll r=0;r<n;r++){
        if(r>0 && h[r-1]%h[r]==0){
            ll sum=prefixSum[r+1]-prefixSum[l];
            while(sum>k){
                sum-=a[l];
                l++;
            }
            ans=max(ans,r-l+1);
        }
        else{
            l=r;
        }
    }
    cout<<ans<<'\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) solve();
}
