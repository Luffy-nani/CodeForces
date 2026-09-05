#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    int l=0;
    int ans=0;
    int count0=0;
    for(int r=0;r<n;r++){

        if(s[r]=='0')
            count0++;
        if(r-l+1==k){
            if(count0==0){
                ans++;
            }
            if(r+1<n)l=r+1;
            count0=0;   
        }
    }

    cout<<ans<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while(t--)
        solve();
}