#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int g=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=i+1)
                g=gcd(g,abs((i+1)-a[i]));
        }
        cout<<g<<endl;
    }
    return 0;
}
