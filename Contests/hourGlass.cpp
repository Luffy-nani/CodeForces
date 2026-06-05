#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int s,k,m;
        cin>>s>>k>>m;

        int ans;

        if(s>=k)
        {
            if((m/k)%2==0)
            {
                ans=s-(m%k);
            }

            else
            {
                ans=k-(m%k);
            }
        }

        else
        {
            ans=max(s-(m%k),0);
        }

        cout<<ans<<endl;

    }
    return 0;
}
