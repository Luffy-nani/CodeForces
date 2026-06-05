#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,q;
        cin>>n>>q;
        vector<int>a(n);
        vector<long long>prefix(n+1,0);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            prefix[i+1]=prefix[i]+a[i];
        }

        long long total=prefix[n];
        while(q--)
        {
            int l,r,k;
            cin>>l>>r>>k;

            l--;r--;
            long long segement=prefix[r+1]-prefix[l];
            long long sum=total-segement+(r-l+1)*k;

            if(sum%2!=0)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }


    }
    return 0;
}
