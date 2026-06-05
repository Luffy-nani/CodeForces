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
        vector<int>a(n-1);
        for(int i=0;i<n-1;i++)
            cin>>a[i];
        
        int sum=0;
        for(int i=0;i<n-1;i++)
            sum+=a[i];
        sum*=-1;
        cout<<sum<<endl;
    }
    return 0;
}
