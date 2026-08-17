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

        string s;
        int ans;
        int count0=0;
        int count1=0;
        for(int i=0;i<n;i++){
            cin>>s[i];

            if(s[i]=='0')count0++;
            else count1++;
        }

        if(abs(count0-count1)>=3 ){
            cout<<-1<<endl;
            continue;
        }

        
    }
    return 0;
}