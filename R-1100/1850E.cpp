#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long  n,c;
    cin>>n>>c;
    vector<long long >s(n);
    for(int i=0;i<n;i++)cin>>s[i];
    
    long long low=0;
    long long high=INT_MAX;

    while(low<=high){
        long long mid=low+(high-low)/2;
        long long area=0;
        for(int i=0;i<n;i++){
            long long side=s[i]+2*mid;
            area+=side*side;
            if(area>c)break;
        }

        if(area==c){
            cout<<mid<<'\n';
            break;
        }
        else if(area>c){
            high=mid-1;
        }
        else low=mid+1;
    }



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}