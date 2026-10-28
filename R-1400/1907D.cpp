
#include <bits/stdc++.h>
using namespace std;

bool isOk(long long k,vector<long long>&l,vector<long long>&r){
    long long left=0;
    long long right=0;

    long long n=l.size();

    for(int i=0;i<n;i++){

        left+=-k;
        right+=k;
        long long rs=max(left,l[i]);
        long long re=min(right,r[i]);

        if(rs>re)return false;

        left=rs;
        right=re;
    }

    return true;
    
}

void solve() {
    int n;
    cin>>n;

    vector<long long>l(n);
    vector<long long>r(n);
    for(int i=0;i<n;i++){
        cin>>l[i]>>r[i];
    }

    long long low=0;
    long long high=1e9;

    while(low<high){
        int mid=low+(high-low)/2;
        if(isOk(mid,l,r)){
            high=mid;
        }
        else{
            low=mid+1;
        }
    }

    cout<<low<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)solve();

    return 0;
}

