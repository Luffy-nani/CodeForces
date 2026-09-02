#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
     unordered_map<int,int>store;
    for(int i=0;i<n;i++){
        cin>>a[i];
        int diff=a[i]-i;
        store[diff]++;
    }

    long long ans=0;

for(auto it : store){
    long long k = it.second;
    ans += k * (k - 1) / 2;
}

    cout<<ans<<'\n';

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
}