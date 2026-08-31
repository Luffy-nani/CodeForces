#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    string a;
    cin>>a;
    string b;
    cin>>b;

   int  count0=0;
   int count1=0;

    vector<bool>canFlip(n);
    for(int i=0;i<n;i++){
        if(a[i]=='0')count0++;
        else count1++;

        if(count0==count1)canFlip[i]=true;
    }

    bool isFlipped=false;

    for(int i=n-1;i>=0;i--){
        char ch=a[i];
        if(isFlipped){
            if(ch=='1')ch='0';
            else ch='1';
        }

        if(ch!=b[i]){
            if(!canFlip[i]){
                cout<<"NO"<<'\n';
                return;
            }

            isFlipped=!isFlipped;
        }
    }

    cout<<"YES"<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while(t--)
        solve();
}