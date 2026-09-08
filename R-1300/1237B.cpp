#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>b(n);
    for(int i=0;i<n;i++)cin>>b[i];

    unordered_map<int,int>store;
    for(int i=0;i<n;i++)store[a[i]]=i;

    int ans=0;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            int x=store[b[i]];
            if(x-ans>i)ans++l
            else continue;
        }
    }

    cout<<ans<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}