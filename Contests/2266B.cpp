#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a,b,c;
    cin>>a>>b>>c;

    long long ans;
    if(a<b){
        ans=max(b-a,abs(a+c-b));
    }
    else{
        ans=a+c-b;
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