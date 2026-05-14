#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n,s,x;
        cin>>n>>s>>x;

        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int sum=0;
        for(int i=0;i<n;i++)
            sum+=a[i];
        
        if(s >= sum && (s - sum) % x == 0)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        else
            {
                cout<<"No"<<endl;
                continue;
            }

    }
    return 0;
}
