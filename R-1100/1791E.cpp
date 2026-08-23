#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;

    vector<int>a(n);
    int negatives=0;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mini=min(mini,abs(a[i]));
        if(a[i]<0)negatives++;
    }

    if(negatives%2==0){
        long long sum=0;
        for(int i=0;i<n;i++)sum+=abs(a[i]);
        cout<<sum<<'\n';
    }
    else{
                long long sum=0;
        for(int i=0;i<n;i++)sum+=abs(a[i]);

        sum-=2*mini;
        cout<<sum<<'\n';

    }

    return;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}