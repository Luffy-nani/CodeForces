#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long a,b,n;
        cin>>a>>b>>n;

        if(b*n<=a)
        {
            cout<<1<<endl;
            continue;
        }

        long long pos=a/b;
        long long ans=min(n,pos+1);
        cout<<ans<<endl;

    }
    return 0;
}
