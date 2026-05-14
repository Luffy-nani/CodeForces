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

       bool ans=true;

       for(int i=1;i<n;i++)
       {
            if((a[i-1]%2==0 && a[i]%2==0)||(a[i-1]%2!=0 &&a[i]%2!=0))
            {
                ans=false;
                break;
            }
       }

       if(ans)cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
    }
    return 0;
}
