
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve() {
    ll n;
    cin>>n;

    ll ans=0;
    ll p=1;
    ll x=0;

    while(n>0){
        ll rem=n%3;

        ll cost=3*p+x*(p/3);

        ans+=rem*cost;

        n/=3;
        p*=3;
        x++;
    }

    cout<<ans<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)solve();
}
