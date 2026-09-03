#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin>>n;

    int m=(n*(n-1))/2;
    vector<int>b(m);
    for(int i=0;i<m;i++)cin>>b[i];
    
    sort(b.begin(),b.end());
    int count=n-1;
    vector<int>ans;

    while(ans.size()<n && count>0){
        ans.push_back(b[count-1]);
        count += n - ans.size() - 1;
    }

    for(int i=0;i<n;i++)cout<<ans[i]<<" ";

    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while(t--)
        solve();
}