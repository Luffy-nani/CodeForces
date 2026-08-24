#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    unordered_set<int>s(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(s.count(a[i]-k)){
            cout<<"YES"<<'\n';return;
        }
    }
    cout<<"NO"<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}