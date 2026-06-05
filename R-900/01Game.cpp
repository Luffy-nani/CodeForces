#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
       string s;
       cin>>s;

       int count1=0;
       int count0=0;

       for(int i=0;i<s.size();i++)
       {
            if(s[i]=='1')count1++;
            else    count0++;
       }

       int operations=min(count1,count0);

       if(operations%2==0)
       {
            cout<<"NET"<<endl;
            continue;
       }

       else
        {
            cout<<"DA"<<endl;
            continue;
        }
    }
}
