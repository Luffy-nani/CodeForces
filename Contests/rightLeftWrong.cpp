#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    string s;
    cin>>s;

    vector<long long>prefixSum(n+1,0);
    for(int i=0;i<n;i++)prefixSum[i+1]=prefixSum[i]+a[i];

    int low=0;
    int high=n-1;
    long long ans=0;
    while(low<high){
        while(s[low]!='L')low++;
        while(s[high]!='R')high--;

        if (low < high) {
            ans += prefixSum[high + 1] - prefixSum[low];

            low++;
            high--;
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