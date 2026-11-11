#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n,m;
    cin>>n>>m;

    vector<ll>a(n),b(m);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int l=0,r=n-1;
    int low=0,high=m-1;

    ll ans=0;

    while(l<=r){
        ll x=abs(a[l]-b[high]);
        ll y=abs(a[r]-b[low]);

        if(x>=y){
            ans+=x;
            l++;
            high--;
        }
        else{
            ans+=y;
            r--;
            low++;
        }
    }

    cout<<ans<<'\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--) solve();
}
