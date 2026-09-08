#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n,x;
    cin>>n>>x;

    vector<long long>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    sort(a.begin(),a.end());
    int low=0;
    int high=n-1;

    int ans=0;
    while(low<=high){
        if(a[low]+a[high]>x){
            ans++;
            high--;
        }
        else{
            ans++;
            low++;
            high--;
        }

    }

    cout<<ans<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}