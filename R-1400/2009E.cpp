#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve() {
    ll n,k;
    cin>>n>>k;

    vector<ll>prefixSum(n+1,0);
    for(int i=0;i<n;i++)prefixSum[i+1]=prefixSum[i]+k+i;
    
    int low=0;
    int high=n;
    while(low<high){
        int mid=low+(high-low)/2;

        if(prefixSum[mid]==(prefixSum[n]-prefixSum[mid])){
            cout<<0<<'\n';
            return;
        }
        else if(prefixSum[mid]>(prefixSum[n]-prefixSum[mid])){
            high=mid;
        }
        else low=mid+1;
    }

    ll ans=LLONG_MAX;
    ans=min(ans,abs(prefixSum[low]-(prefixSum[n]-prefixSum[low])));

    if(low>0){
        ans=min(ans,abs(prefixSum[low-1]-(prefixSum[n]-prefixSum[low-1])));
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
