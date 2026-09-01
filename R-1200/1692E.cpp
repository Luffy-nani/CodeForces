#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,s;
    cin>>n>>s;
    vector<int>a(n);
    long long k=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        k+=a[i];
    }

    if(s>k){
        cout<<-1<<'\n';
        return;
    }

    

    int l=0;
    long long sum=0;
    int ans=0;
    for(int r=0;r<n;r++){
        sum+=a[r];
        while(sum>s){
            sum-=a[l];
            l++;
        }

        if(sum==s){
            ans=max(ans,r-l+1);
        }
    }

    cout<<n-ans<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}