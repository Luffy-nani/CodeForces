#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n,q;
    cin>>n>>q;

    vector<long long> a(n);

    for(int i=0;i<n;i++)
        cin>>a[i];

    vector<pair<long long,int>> k(q);

    for(int i=0;i<q;i++){
        cin>>k[i].first;
        k[i].second=i;
    }

    sort(k.begin(),k.end());

    vector<long long> ans(q);

    int lastIndex=0;
    long long beforeSum=0;

    for(auto &p:k){

        for(int i=lastIndex;i<n;i++){

            if(p.first<a[i]){
                lastIndex=i;
                break;
            }

            beforeSum+=a[i];
        }

        ans[p.second]=beforeSum;
    }

    for(int i=0;i<q;i++)
        cout<<ans[i]<<" ";

    cout<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin>>t;

    while(t--)
        solve();
}