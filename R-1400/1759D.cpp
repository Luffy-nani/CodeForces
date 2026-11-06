
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n,m;
    cin>>n>>m;

    ll c2=0,c5=0;

    ll temp=n;
    while(temp%2==0){
        c2++;
        temp=temp/2;
    }

    temp=n;
    while(temp%5==0){
        c5++;
        temp=temp/5;
    }

    for(int i=18;i>=0;i--){
        ll e2=max(0,i-c2);
        ll e5=max(0,i-c5);

        ll need=pow(2,e2)*pow(5,e5);

        if(need<=m){
            ll largestneed=m-m%need;
            cout<<largestneed*n<<'\n';
            return;
        }
    }

    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}
