#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(const unordered_map<int,int>freq,int n,int m,int t){
    ll total=0;

    for(int i=1;i<=n;i++){
        if(t<freq[i])total+=t;
        else{
            total+=freq[i]+(t-freq[i])/2;
        }
    }

    return total>=m;
}

void solve() {
    int n,m;
    cin>>n>>m;

    vector<int>a(m);
    for(int i=0;i<m;i++)cin>>a[i];

    unordered_map<int,int>freq;
    for(int i=0;i<m;i++)freq[a[i]]++;

    int low=0;
    int high=2*m;

    while(low<high){
        int mid=low+(high-low)/2;
        if(check(freq,n,m,mid))high=mid;
        else low=mid+1;
    }

    cout<<low<<'\n';
    return;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
