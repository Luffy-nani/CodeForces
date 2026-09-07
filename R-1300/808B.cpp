#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;

    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    vector<long long>prefixSum(n+1);

    for(int i=0;i<n;i++)
        prefixSum[i+1]=prefixSum[i]+a[i];

    long long sum=0;

    for(int i=0;i+k<=n;i++){
        sum += prefixSum[i+k]-prefixSum[i];
    }

    double ans=(double)sum/(n-k+1);

    cout<<fixed<<setprecision(10)<<ans<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}