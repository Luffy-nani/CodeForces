#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;

        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a.begin(),a.end());
        int maxcount=0;
        int count=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]-a[i-1]<=k)
            {
                count++;
                maxcount=max(count,maxcount);
            }

            else
                count=0;
        }

        cout<<n-maxcount-1<<endl;

    }
    return 0;
}
