
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve() {
    int n,k;
    cin>>n>>k;

    vector<ll>a(n);
    map<ll,int>freq;

    for(int i=0;i<n;i++){
        cin>>a[i];
        freq[a[i]]++;
    }

    ll l=-1;
    ll ans=-1;
    ll best_l=-1,best_r=-1;
    ll prev=-2;

    for(auto [r,c]:freq){
        if(c>=k){
            if(l==-1 || r!=prev+1){
                l=r;
            }

            if(r-l>ans){
                ans=r-l;
                best_l=l;
                best_r=r;
            }
        }
        else{
            l=-1;
        }

        prev=r;
    }

    if(best_l==-1){
        cout<<-1<<'\n';
        return;
    }

    cout<<best_l<<" "<<best_r<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--) solve();
}
