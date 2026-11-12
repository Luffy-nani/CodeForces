
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve() {
    int n;
    cin>>n;
    
    vector<ll>h(n);
    for(int i=0;i<n;i++)cin>>h[i];

    sort(h.begin(),h.end());
    vector<ll>ans(n);

    int j=0;

    for(int i=0;i<n;i+=2){
        ans[j]=h[i];
        j++;
    }
    int i=(n%2==0)?n-1:n-2;
for(;i>=1;i-=2){
    ans[j++]=h[i];
}

    ll ven=0;
    ll prev=0;
    for(int i=0;i<n;i++){
        if(ans[i]>prev){
            prev=ans[i];
            ven++;
        }
    }

    prev=0;
    for(int i=n-1;i>=0;i--){
        if(ans[i]>prev){
            prev=ans[i];
            ven++;
        }
    }

    cout<<ven-1<<'\n';
    for(int i=0;i<n;i++)cout<<ans[i]<<" ";
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}
