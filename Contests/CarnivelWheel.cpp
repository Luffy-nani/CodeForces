#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
       int l,a,b;
       cin>>l>>a>>b;
       
       int g=gcd(l,b);
       int ans = a + g * ((l - 1 - a) / g);
       cout << ans << '\n';
    }
    return 0;
}
