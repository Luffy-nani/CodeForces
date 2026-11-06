#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;

    int b,h;
    if(n%2==0){
        b=n/2;
        cout<<b*b<<'\n';
        
    }
    else{
        n++;
         b=n/2; h=b-1;
         cout<<b*h<<'\n';
    }
    return ;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}
