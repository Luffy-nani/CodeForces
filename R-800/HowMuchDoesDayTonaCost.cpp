#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
       int n,k;
       cin>>n>>k;
       vector<int>a(n);
       for(int i=0;i<n;i++)
            cin>>a[i];  

        bool hasFound=false;
        for(int i=0;i<n;i++)
        {
            if(a[i]==k)
            {
                hasFound=true;
                break;
            }
        }
        if(hasFound)cout<<"Yes"<<endl;
        else    cout<<"No"<<endl;

    }
    return 0;
}
