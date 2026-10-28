
#include <bits/stdc++.h>
using namespace std;


void solve() {
    long long n,k;
    cin>>n>>k;

    vector<long long>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    if(k>=3){
        cout<<0<<'\n';
        return;
    }

    if(k==0){
        long long x=*min_element(a.begin(),a.end());
        cout<<x<<'\n';
        return;
    }

    else{
        sort(a.begin(),a.end());
        long long mini=LLONG_MAX;

        for(int i=1;i<n;i++)mini=min(a[i]-a[i-1],mini);

        int ans=min(*min_element(a.begin(),a.end()),mini);
        cout<<ans<<'\n';
        return;
    }

    return ;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)solve();

    return 0;
}

