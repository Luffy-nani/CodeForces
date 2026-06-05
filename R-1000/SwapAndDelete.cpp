    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        long long t;
        cin >> t;
        while (t--) {
            string s;
            cin>>s;

            int count0=0;
            int count1=0;

            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='0')count0++;
                else count1++;
            }

            int length=0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='0' && count1>0)
                {
                    length++;
                    count1--;
                }
                else if(s[i]=='1'&& count0>0)
                {
                    length++;
                    count0--;
                }

                else break;
            }

            cout<<s.size()-length<<endl;
            
        }
        return 0;
    }
