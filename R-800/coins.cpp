#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        long long n,k;
        cin>>n>>k;

        if(n%2!=0&&k%2==0)
        {
            cout<<"NO"<<endl;
            continue;
        }

        cout<<"YES"<<endl;
    }

        
    return 0;
}
