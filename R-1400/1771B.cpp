
#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n,m;
    cin>>n>>m;

    vector<pair<int,int>>store(m);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        
        store[i]={x,y};
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)solve();

    return 0;
}

