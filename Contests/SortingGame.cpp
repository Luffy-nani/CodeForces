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
        cin>>s;

        bool check=false;
        for(int i=1;i<n;i++)
        {
            if(s[i]<s[i-1])
                check=true;
        }

        if(!check)
        {
            cout<<"Bob"<<endl;
            continue;
        }

        cout<<"Alice"<<endl;

        vector<int>ans;
        int p1=0;
        int p0=n-1;

        while(p1<p0)
        {
            while(p1<n && s[p1]!='1')p1++;
            while(p0>=0 && s[p0]!='0')p0--;
            
            if(p1>=p0)break;

            ans.push_back(p1);
            ans.push_back(p0);
            p1++;
            p0--;
        }

        sort(ans.begin(),ans.end());

        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]+1<<" ";
        }

        cout<<endl;
    }
    return 0;
}
