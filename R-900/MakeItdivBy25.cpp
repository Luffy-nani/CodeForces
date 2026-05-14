#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        string s = to_string(n);
        
        vector<string>targets={"00","25","50","75"};

        int ans=INT_MAX;

        for(auto &p:targets)
        {
            int count=0;
            int pos=s.size()-1;

            while(pos>=0 &&s[pos]!=p[1])
            {
                count++;
                pos--;
            }

            if(pos<0)continue;
            pos--;

            while(pos>=0 && s[pos]!=p[0])
            {
                count++;
                pos--;
            }

            if(pos<0)continue;
            ans=min(ans,count);
        }

        cout<<ans<<endl;
    }
    return 0;
}
