
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;

    string s;
    cin>>s;

    int count=0;
    if(s[0]=='B')count++;

    for(int i=1;i<n;i++){
        if(s[i]==s[i-1])count++;
    }

    cout<<count<<'\n';
    return;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}
