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

        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];

        if(n%2==0)
        {
            int x=a[0];
            for(int i=1;i<n;i++)x^=a[i];

            if(x==0){
                cout<<0<<endl;
                continue;
            }
            else{
                cout<<-1<<endl;
                continue;
            }
        }

        else
        {
            int x=a[0];
            for(int i=1;i<n;i++)x^=a[i];

            cout<<x<<endl;
            continue;
        }
    }

        
    return 0;
}
