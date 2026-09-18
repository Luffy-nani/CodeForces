#include <bits/stdc++.h>
using namespace std;


void solve() {
    long long n,m;
    cin>>n>>m;

    vector<long long>k(n);
    for(int i=0;i<n;i++)cin>>k[i];

    vector<long long>c(m);
    for(int i=0;i<m;i++)cin>>c[i];

    int l=0;

    sort(k.begin(),k.end());

    long long cost=0;

    for(int i=n-1;i>=0;i--){
        if(c[k[i]-1]>c[l]){
            cost+=c[l];
            l++;
        }
        else{
            cost+=c[k[i]-1];
        }
    }

    cout<<cost<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}   