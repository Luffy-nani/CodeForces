#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--) {
        long long n,a,b;
        cin>>n>>a>>b;

        long long ans1=0;
        long long x=n/3;
        long long y=n%3;
        ans1+=b*x;

        ans1+=min(y*a,b);

        long long ans2=0;
        ans2+=n*a;

        long long ans=min(ans1,ans2);
        cout<<ans<<endl;


        
    }
    return 0;
}