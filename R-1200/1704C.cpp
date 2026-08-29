#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    long long m;
    vector<long long>a(m);
    for(int i=0;i<m;i++)cin>>a[i];

    sort(a.begin(),a.end());
    vector<long long>gaps;

    for(int i=1;i<m;i++){
        gaps.push_back(a[i]-a[i-1]-1);
    }
    gaps.push_back(n-a[m-1]+a[0]-1);
    sort(gaps.rbegin(),gaps.rend());

    long long saved=0;
    int count=0;


    for(int i=0;i<gaps.size();i++){
        if(4*count>=gap[i])continue;
        saved+=gap[i]-1-4*count;
    }

    cout<<n-saved<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while(t--)
        solve();
}