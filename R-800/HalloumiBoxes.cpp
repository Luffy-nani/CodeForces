#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        while(n--)
        {
            int x;
            cin>>x;
            a.push_back(x);

        }
        if(k==1)
        {
            if(is_sorted(a.begin(),a.end()))
                cout<<"Yes"<<endl;
            else 
                cout<<"No"<<endl;
        }

        if(k>1)
            cout<<"Yes"<<endl;

    }

    return 0;
}