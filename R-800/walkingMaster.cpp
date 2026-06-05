#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int ans=0;
        int n=d-b;
        if(n>=0)
        {
            a+=n;
            b+=n;
            ans+=n;
        }

        else{
            cout<<"-1"<<endl;
            continue;
        }

        int m=a-c;
        if(m>=0)
        {
            ans+=m;
        }
        else{
            cout<<"-1"<<endl;
            continue;
        }

        cout<<ans<<endl;    
    }

        
    return 0;
}
