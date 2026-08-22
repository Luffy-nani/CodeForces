#include <bits/stdc++.h>
using namespace std;



void solve() {
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>b(n);
    for(int i=0;i<n;i++)cin>>b[i];

    int l=0;
    while(l<n && a[l]==b[l])l++;
    int r=n-1;
    while(r>0 && a[r]==b[r])r--;

    if(l==n){
        int end=0;
        int count=1;
        int p=0;
        for(int i=1;i<n;i++){
            if(b[i-1]<=b[i]){
                count++;
                end=i;
            }

            else{
                count=1;
            }
                if (count > p) {
        p = count;
    }
            p=max(p,count);
        }

        cout << end - p + 1 << " " << end + 1 << '\n';
        return;
    }

    while(l>0 && b[l-1]<=b[l])l--;
    while(r+1<n && b[r]<=b[r+1])r++;

    cout<<l+1<<" "<<r+1<<'\n';

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