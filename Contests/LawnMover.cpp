#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int n,w;
        cin>>n>>w;

        int ans=n/w;
        ans=ans*(w-1);
        ans+=n%w;

        cout<<ans<<endl;
    }

    return 0;
}
