#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin>>n;

    vector<int>b(n);
    for(int i=0;i<n;i++)cin>>b[i];

    unordered_map<int,int>freq;
    for(int i=0;i<n;i++)freq[b[i]]++;

    for(auto &p:freq){
        if(p.first!=p.second){
            cout<<-1<<"\n";
            return;
        }
    }

    sort(b.begin(),b.end());
    for(int i=0;i<n;i++)cout<<b[i]<<" ";
    cout<<endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--) solve();
}
