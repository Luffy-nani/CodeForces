#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;

        vector<int>a(n*k);
        for(int i=0;i<n*k;i++)cin>>a[i];

        long long sum=0;
        long long position=n*k;

        while(k--)
        {
            position-=(n/2)+1;
            sum+=a[position];
        }

        cout<<sum<<endl;
    }
    return 0;
}
