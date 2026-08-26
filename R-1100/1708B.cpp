#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n,l,r;
    cin>>n>>l>>r;

    vector<long long>ans;

    for(int i=1;i<=n;i++){
      long long temp = ceil((double)l / i) * i;
        if(temp>r){
            cout<<"NO"<<'\n';
            return;
        }
        ans.push_back(temp);
    }

    cout<<"YES"<<'\n';
    for(int i=0;i<n;i++)cout<<ans[i]<<" ";

    cout<<'\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}