#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    long long ans=2;    

    if(a.size()==1){
        cout<<1<<'\n';
        return;
    }

    bool inc;
    if(a[0]>a[1])inc=false;
    else if(a[0]<a[1])inc=true;
    else{
        int j=1;
        while(j<n && a[j]==a[j-1]){
            j++;
        }
        if(j==n){
            cout<<1<<'\n';
            return;
        }
        if(a[j]>a[j-1])inc=true;
        else inc=false;
    }

    for(int i=1;i<n-1;i++){
         if(a[i]==a[i+1])continue;
        if(a[i]<a[i+1] && inc==false){
            ans++;
            inc=true;
        }
        if(a[i]>a[i+1] && inc==true){
            inc=false;
            ans++;
        }

    }

    cout<<ans<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while(t--)
        solve();
}