    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);

        int t;
        cin >> t;

        while(t--)
        {
            int n;
            cin>>n;
            string s;
            cin>>s;
        
        bool has=false;
        for(int i=2;i<n;i++)
        {
            if(s[i] == '.' && s[i-1] == '.' && s[i-2] == '.')
            {
                has=true;
                break;
            }
        }

        if(has)
        {
            cout<<2<<endl;
        }

        else
        {
            int count=0;
            for(int i=0;i<n;i++)
            {
                if(s[i]=='.')
                    count++;
            }
            cout<<count<<endl;
        }
     }
        return 0;
    }