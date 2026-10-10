#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;

    vector<int>cnt(n+1,0);

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        cnt[x]++;
    }

    for(int i=0;i<=n;i++){
        if(cnt[i]<2*k){
            cout<<(cnt[i]==2*k-1?"YES":"NO")<<'\n';
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}
