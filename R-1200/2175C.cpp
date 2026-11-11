
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s,t;
    cin>>s>>t;

    vector<int>freq(26,0);

    for(char c:t)freq[c-'a']++;
    for(char c:s)freq[c-'a']--;

    for(int i=0;i<26;i++){
        if(freq[i]<0){
            cout<<"Impossible\n";
            return;
        }
    }

    string extra="";

    for(int i=0;i<26;i++){
        extra+=string(freq[i],char('a'+i));
    }

    string ans="";
    int i=0,j=0;

    while(i<s.size() && j<extra.size()){
        if(s[i]<extra[j]){
            ans+=s[i++];
        }
        else if(s[i]>extra[j]){
            ans+=extra[j++];
        }
        else{
            int x=i,y=j;

            while(x<s.size() && y<extra.size() && s[x]==extra[y]){
                x++;
                y++;
            }

            if(x==s.size() || y==extra.size() || s[x]<extra[y]){
                ans+=s[i++];
            }
            else{
                ans+=extra[j++];
            }
        }
    }

    while(i<s.size())ans+=s[i++];
    while(j<extra.size())ans+=extra[j++];

    cout<<ans<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin>>q;

    while(q--)solve();
}
