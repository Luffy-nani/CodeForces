#include <bits/stdc++.h>
using namespace std;
using ll=long long;

ll prefixSum(ll i,ll k){
    return i*(2*k+i-1)/2;
}

void solve() {
    ll n,k;
    cin>>n>>k;

    ll total=prefixSum(n,k);

    ll low=0;
    ll high=n;

    while(low<high){
        ll mid=low+(high-low)/2;

        ll left=prefixSum(mid,k);
        ll right=total-left;

        if(left==right){
            cout<<0<<'\n';
            return;
        }
        else if(left>right){
            high=mid;
        }
        else low=mid+1;
    }

    ll left=prefixSum(low,k);
    ll right=total-left;

    ll ans=abs(left-right);

    if(low>0){
        left=prefixSum(low-1,k);
        right=total-left;

        ans=min(ans,abs(left-right));
    }

    cout<<ans<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;

    while(t--)
        solve();
}
