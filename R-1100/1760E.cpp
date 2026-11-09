
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

ll calculate(vector<int>&a,int n){
    ll ans=0;
    int zeros=0;

    for(int i=n-1;i>=0;i--){
        if(a[i]==0) zeros++;
        else ans+=zeros;
    }

    return ans;
}

void solve() {
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    ll ans=calculate(a,n);
    ll best=ans;

    // First 0 -> 1
    for(int i=0;i<n;i++){
        if(a[i]==0){
            a[i]=1;
            best=max(best,calculate(a,n));
            a[i]=0;
            break;
        }
    }

    // Last 1 -> 0
    for(int i=n-1;i>=0;i--){
        if(a[i]==1){
            a[i]=0;
            best=max(best,calculate(a,n));
            a[i]=1;
            break;
        }
    }

    cout<<best<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;

    while(t--)
        solve();
}
