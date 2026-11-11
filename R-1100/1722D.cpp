
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve() {
    ll n;
    cin>>n;

    string s;
    cin>>s;

    ll ans=0;

    vector<ll>gain(n);

    for(int i=0;i<n;i++){
        ll a,b;

        if(s[i]=='L'){
            a=i;
            b=n-i-1;
        }
        else{
            a=n-i-1;
            b=i;
        }

        ans+=a;
        gain[i]=b-a;
    }

    sort(gain.rbegin(),gain.rend());

    for(int i=0;i<n;i++){
        ans+=max(0LL,gain[i]);
        cout<<ans<<" ";
    }

    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;

    while(t--)
        solve();
}
