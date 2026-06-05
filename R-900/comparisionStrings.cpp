#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;

        string s;
        cin>>s;

        int maxcount=1;
         int acount=1;
        int bcount=1;
        for(int i=0;i<n;i++)
        {

            if(s[i]=='>')
            {
                acount++;
                bcount=1;
            }
            if(s[i]=='<')
            {
                bcount++;
                acount=1;
            }
            maxcount = max(maxcount, max(acount, bcount));
        }
        cout<<maxcount<<endl;
    }
    return 0;
}
