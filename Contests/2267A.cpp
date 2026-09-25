#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    char c;
    cin>>n>>c;

    string s;
    cin>>s;

    int l=0;
    int h=n-1;

    int ans=0;

    while(l<=h){
        if(s[l]!=s[r]){
            if(s[l]==c || s[h]==c)ans++;
            else ans+=2;
        }

        l++;
        h--;
    }

    cout<<ans<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}