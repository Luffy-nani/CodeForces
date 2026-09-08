#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    int count0=0;
    for(int i=0;i<n;i++){
        if(a[i]==0)count0++;
    }
    if(count0<2){
        cout<<-1<<'\n';
        return;
    }

    if(a[0]==0 && a[n-1]==0){
        cout<<0<<'\n';
        return;
    }
    int x=a[0];
    int y=a[n-1];

    if((x==0 && y==1) || (x==1 && y==0)){
        cout<<1<<'\n';
        return;
    }

    if(x==1 && y==1){
        cout<<2<<'\n';
        return;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}