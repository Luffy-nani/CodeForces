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

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int count0=0;
        int count1=0;

        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
                count0++;
            if(a[i]==1)
                count1++;
        }

        if(count0>0 && count1>0)
        {
            cout<<"Yes"<<endl;
            continue;
        }

        else if(count0==1 && count1==0)
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
