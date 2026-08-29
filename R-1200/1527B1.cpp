#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    long long count0=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0')count0++;
    }

    if(count0%2!=0 && count0!=1){
        cout<<"ALICE"<<'\n';

    }
    else{
        cout<<"BOB"<<'\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while(t--)
        solve();
}