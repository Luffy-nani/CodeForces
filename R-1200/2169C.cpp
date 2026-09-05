#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    vector<long long>prefixSum(n+1);
    for(int i=0;i<n;i++)prefixSum[i+1]=prefixSum[i]+a[i];

    long long ans=0;
    long long max_term2=LLONG_MIN;

    for(int i=1;i<n;i++){
        long long term2=i+prefixSum[i-1]-(i*i);
        max_term2=max(max_term2,term2);

        long long term1=(i*i)+i-prefixSum[i];

        ans=max(ans,term1+max_term2);
    }

    cout<<prefixSum[n]+ans<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}