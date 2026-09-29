#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin>>n;

    vector<long long>factors;

    long long temp=n;

    for(int i=2;i*i<=temp;i++){
        if(temp%i==0){
            factors.push_back(i);
            temp=temp/i;
        }

        if(factors.size()==2)break;
    }

    if(temp==1 || factors.size()<2 || temp==factors[0]|| temp==factors[1])cout<<"NO"<<'\n';
    else {cout<<"YES"<<'\n'; cout << factors[0] << " " << factors[1] << " " << temp<< endl;}

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;

    cin>>t;
    while(t--)solve();

    return 0;
}