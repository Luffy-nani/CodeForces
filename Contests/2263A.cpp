#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    int count0=0;
    int count1=0;
    for(int i=0;i<n;i++){
        if(a[i]==0)count0++;
        else count1++;
    }

    if(count1>=count0)cout<<"Bessie"<<'\n';
    else cout<<"Elsie"<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}