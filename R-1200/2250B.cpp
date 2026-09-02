#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

void solve() {
    string s;
    cin>>s;

    int delete0=0;
    int delete1=0;

    int ans=0;
    for(int i=1;i<n;i++){
        if(s[i]=='0 && s[i-1]=='0)delete0++;
        if(s[i]=='1' && s[i-1]=='1')delete1++;
    }

    int end0=0;
    int end1=0;
    if(s[0]=='0')end0++;
    else end1++;

    if(s[n-1]=='0')end0++;
    else end1++;

    ans+=delete0+delete1;

    if(abs(delete0-delete1)<=1){
        cout<<ans<<'\n';
    }
    else{
        if(delete0>delete1){
            int r=delete0-delete1;
            if(r>=end1){
              an  
            }
        }
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