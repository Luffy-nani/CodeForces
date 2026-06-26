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

        int sum=0;
        int minimum=INT_MAX;

        for(int i=0;i<n;i++){
            sum+=min(minimum,a[i]);
            minimum=min(minimum,a[i]);
        }

        cout<<sum<<endl;
    }
    return 0;
}
