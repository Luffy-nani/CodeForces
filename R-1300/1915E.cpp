#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    vector<long long>prefixEven(n);
    vector<long long>prefixOdd(n);
    
    map<long long,int>mp;
    prefixEven[0]=a[0];

    bool found=false;
    mp[prefixEven[0]-prefixOdd[0]]++;

    for(int i=1;i<n;i++){
        prefixEven[i]=prefixEven[i-1];
        prefixOdd[i]=prefixOdd[i-1];
        if(i%2==0)prefixEven[i]+=a[i];
        else prefixOdd[i]+=a[i];

        mp[prefixEven[i]-prefixOdd[i]]++;

        if(mp[prefixEven[i]-prefixOdd[i]]>1 || prefixEven[i]-prefixOdd[i]==0){
            found=true;
            break;
        }
    }

    if(found==true)cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}