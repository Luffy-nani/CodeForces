#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    vector<long long> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    if(a[n-2] > a[n-1]) {
        cout << -1 << '\n';
        return;
    }

    if(a[n-1]<0){
        if(is_sorted(a.begin(),a.end())){
            cout<<0<<'\n';
            return;
        }
        else{
            cout<<-1<<'\n';
            return;
        }
    }

    cout << n-2 << '\n';

    for(int i = 0; i < n-2; i++) {
        cout << i+1 << " " << n-1 << " " << n << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}