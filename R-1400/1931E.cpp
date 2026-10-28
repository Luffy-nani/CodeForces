
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin>>n>>m;

    vector<long long>a(n);
    long long count=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        string x=to_string(a[i]);
        count+=x.size();
    }

    vector<int>zeros;

    for(int i=0;i<n;i++){
        string x=to_string(a[i]);
        int c0=0;

        for(int j=(int)x.size()-1;j>=0;j--){
            if(x[j]=='0')c0++;
            else break;
        }

        if(c0>0)zeros.push_back(c0);
    }

    sort(zeros.rbegin(),zeros.rend());

    for(int i=0;i<(int)zeros.size();i+=2){
        count-=zeros[i];
    }

    if(count>=m)cout<<"Sasha"<<'\n';
    else cout<<"Anna"<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)solve();

    return 0;
}

