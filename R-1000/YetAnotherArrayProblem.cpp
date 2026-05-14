#include <bits/stdc++.h>
using namespace std;

int main() {
     ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        
        int t=a[0];
        for(int i=1;i<n;i++)
            t=gcd(t,a[i]);
        
        int ans=2;
        while(true)
        {
            if(gcd(ans,t)==1)
                break;
            ans++;
        }

        cout<<ans<<endl;
    }
    return 0;
}
