#include <bits/stdc++.h>
using namespace std;


void solve() {
    long long n;
    cin>>n;

    map<long long,long long>mp;

    for(int i=0;i<n;i++){
        long long temp;
        cin>>temp;

        for(int j=0;j<31;j++){
            if(temp & (1<<j))mp[j]++;
        }
    }

    int g=0;
    int f=1;

    for(auto &p:mp){
        f=0;
        if(g==0)g=p.second;
        else g=gcd(g,p.second);
    }

    if(f){
        for(int i=0;i<n;i++){
            cout<<i+1<<" ";
        }
        cout<<endl;
        return;
    }

    vector<int>factors;
    for(int i=1;i*i<=g;i++){
        if(g%i==0){
            factors.push_back(i);
            if(i!=g/i)factors.push_back(g/i);
        }
    }

    sort(factors.begin(),factors.end());
    for(int i=0;i<factors.size();i++){
        cout<<factors[i]<<" ";
    }
    cout<<endl;
    
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