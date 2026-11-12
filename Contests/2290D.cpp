
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve() {
    int n;
    cin>>n;

    string s;
    cin>>s;

    ll ans=0;
    int low=0;
    int high=n-1;

    vector<int>visited(26,0);

    while(low<high){
        int a=s[low]-'a';
        int b=s[high]-'a';

        if(a>b){
            int temp=a;
            a=b;
            b=temp; //i can use swap() alsoooooo 
        }

        for(int i=a+1;i<=b;i++){
            visited[i]=1;
        }

        low++;
        high--;
    }

    for(int i=0;i<26;i++){
        ans+=visited[i];
    }

    cout<<ans<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}
