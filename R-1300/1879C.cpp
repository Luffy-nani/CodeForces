#include <bits/stdc++.h>
using namespace std;


void solve() {
    string s;cin>>s;

    int n=s.size();

    vector<long long>runs;

    int count=1;
    char last=s[0];
    for(int i=1;i<n;i++){
        if(s[i]==last)count++;
        else{
            runs.push_back(count-1);
            last=s[i];
            count=1;
        }
    }
    runs.push_back(count-1);

    long long total=0;
    long long product=1;
    for(int i=0;i<runs.size();i++){
        total+=runs[i];
        product*=(runs[i]+1);
        product=product%998244353;
    }

    for(int i=1;i<=total;i++){
        product*=i;
        product=product%998244353;
    }

    cout<<total<<" "<<product<<'\n';

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