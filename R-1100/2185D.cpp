
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n,m,h;
    cin>>n>>m>>h;

    vector<ll>a(n);
    vector<bool>reset(n,false);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    vector<ll>temp=a;
    
    for(int i=0;i<m;i++){
        ll b,c;
        cin>>b>>c;

        b--;
        if(reset[b]){
            a[b]=temp[b];
            reset[b]=false;
        }
        a[b]+=c;

        if(a[b]>h){
            reset[b]=true;
        }
    }

    for(int i=0;i<n;i++){
        if(reset[i])cout<<temp[i]<<" ";
        else cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) solve();
}
