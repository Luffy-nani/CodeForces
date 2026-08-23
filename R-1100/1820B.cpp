#include <bits/stdc++.h>
using namespace std;



void solve() {
    string s;
    cin>>s;

    int n=s.size();
    int count=0;
    int max_ones=0;

    string dup=s+s;
    for(int i=0;i<2*n;i++){
        if(dup[i]=='1'){
            count++;
            max_ones=max(max_ones,count);
        }
        else{
            count=0;
        }
    }

    if(max_ones==2*n)max_ones=n;

    if(max_ones%2==0){
        long long ans=max_ones/2;
        ans=ans*(ans+1);
        cout<<ans<<'\n';
  
    }
    else{
        long long ans=max_ones/2;
        ans++;
        cout<<ans*ans<<'\n';
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