
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

long long p2[19];
long long p5[19];

void solve(){
    ll n,m;
    cin>>n>>m;

    int c2=0,c5=0;

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
        int e2=max(0,i-c2);
        int e5=max(0,i-c5);

        ll need=p2[e2]*p5[e5];

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

    p2[0] = 1;
    p5[0] = 1;

    // Precompute powers of 2 and 5 up to 18 to cover needed extra factors
    for (int i = 1; i <= 18; i++) {
            p2[i] = 2 * p2[i - 1];
            p5[i] = 5 * p5[i - 1];
    }

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}
