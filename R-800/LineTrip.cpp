#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n,x;
        cin>>n>>x;
        vector<int>a;
        int y=n;
        while(y--)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }

        int maximum=a[0];
        for(int i=1;i<n;i++)
        {
            if(maximum<a[i]-a[i-1])
                maximum=max(maximum,a[i]-a[i-1]);
        }

        maximum=max(maximum,2*(x-a[n-1]));
        cout<<maximum<<endl;
    }

    return 0;
}
