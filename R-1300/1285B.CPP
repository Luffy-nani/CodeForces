#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;

    vector<long long>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    long long sum=0;
    long long max_sum=0;

    long long total_sum=0;
    for(int i=0;i<n;i++)total_sum+=a[i];
    int left=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum<=0){
            left=i+1;
        }

        if(sum>=total_sum && (left>0 || i<n-1)){
            cout<<"NO"<<'\n';
            return;
        }

    }

    cout<<"YES"<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;

    cin>>t;
    while(t--)solve();

    return 0;
}