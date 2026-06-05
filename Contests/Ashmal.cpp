#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        vector<string>a(n);
        for(int i=0;i<n;i++)cin>>a[i];

        string s=a[0];

        for(int i=1;i<n;i++)
        {
            s=min(s+a[i],a[i]+s);
        }

        cout<<s<<endl;
    }
    return 0;
}
