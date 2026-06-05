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

        int maxBlank=0;
        int curr=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
               curr++;
               maxBlank=max(maxBlank,curr);
            }
            else
                curr=0;
        }
        cout<<maxBlank<<"\n";
    }

        
    return 0;
}
