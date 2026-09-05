#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    long long odd=0;
    long long even_odd=0;
    long long even_even=0;
    for(int i=0;i<n;i++){
        if(a[i]%2!=0)odd++;
        else{
            int x=a[i]/2;
            if(x%2==0)even_even++;
            else even_odd++;
        }
    }

    long long ans=max({odd, even_even, even_odd});
    cout<<ans<<'\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while(t--)
        solve();
}