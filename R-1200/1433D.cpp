#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    int diff=-1;
    for(int i=1;i<n;i++){
        if(a[0]!=a[i]){
            diff=i;
            break;
        }
    }
    if(diff==-1){
        cout<<"NO"<<'\n';
        return;
    }

    cout<<"YES"<<'\n';

    for(int i=1;i<n;i++){
        if(a[0]!=a[i]){
            cout<<1<<" "<<i+1<<'\n';
        }
        else{
            cout<<diff+1<<" "<<i+1<<'\n';
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