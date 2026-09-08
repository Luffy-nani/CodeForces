#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x,y,k;
    cin>>x>>y>>k;

    if(x==y){
        cout<<0<<'\n';
        return;
    }

    int diff=x-y;
    long long ans=0;

    for(int i=0;i<diff;i++){
        ans+=(x)%(y+i);
    }

    ans+=(k-diff)*x;
    ans+=k*(k+1)/2;

    cout<<ans<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}