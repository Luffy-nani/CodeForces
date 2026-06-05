#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;

        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];

        bool sorted=true;
        for(int i=1;i<n;i++)
        {
            if(a[i]<a[i-1])
                sorted=false;
        }

        if(sorted==false)cout<<"0"<<endl;
       else
       {
         int minDiff=INT_MAX;
        for(int i=1;i<n;i++)
        {
            if(a[i]-a[i-1]<minDiff)
                minDiff=a[i]-a[i-1];
        }

        cout<<(minDiff/2)+1<<endl;
       }
    }

    return 0;
}