#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    while (n--) {
        string s,t;
        cin>>s>>t;

        vector<int>freq(26,0);

        for(char c:t)
            freq[c-'A']++;
        
        for(int i=s.size()-1;i>=0;i--)
        {
            if(freq[s[i]-'A']>0)
                freq[s[i]-'A']--;
            else
                s[i]='.';
        }

        string ans="";

        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='.')
                ans+=s[i];
        }

        if(ans==t)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
