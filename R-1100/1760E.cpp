
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve() {
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    vector<int>count0(n+1,0);
    for(int i=n-1;i>=0;i--){
        if(a[i]==0)count0[i]=count0[i+1]+1;
        else count0[i]=count0[i+1];
    }

    ll ans=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            ans+=count0[i];
        }
    }

    ll best=ans;

    // First 0 -> 1
    vector<int>temp=a;

    for(int i=0;i<n;i++){
        if(temp[i]==0){
            temp[i]=1;
            break;
        }
    }

    ll curr=0;
    vector<int>suffix(n+1,0);

    for(int i=n-1;i>=0;i--){
        suffix[i]=suffix[i+1]+(temp[i]==0);
    }

    for(int i=0;i<n;i++){
        if(temp[i]==1) curr+=suffix[i];
    }

    best=max(best,curr);

    // Last 1 -> 0
    temp=a;

    for(int i=n-1;i>=0;i--){
        if(temp[i]==1){
            temp[i]=0;
            break;
        }
    }

    fill(suffix.begin(),suffix.end(),0);

    for(int i=n-1;i>=0;i--){
        suffix[i]=suffix[i+1]+(temp[i]==0);
    }

    curr=0;

    for(int i=0;i<n;i++){
        if(temp[i]==1) curr+=suffix[i];
    }

    best=max(best,curr);

    cout<<best<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;

    while(t--) solve();
}
