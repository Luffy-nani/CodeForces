#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++)
            freq[a[i]]++;
        
        if(freq.size()>2)
        {
            cout<<"No"<<endl;
            continue;
        }

        else
        {
            if(freq.size()==1)
            {
                cout<<"Yes"<<endl;
                continue;
            }

            else {
                vector<int> f;
                for (auto &p : freq) f.push_back(p.second);
                sort(f.begin(), f.end());

                if (f[1] <= ceil(n/2.0)) {
                    cout << "Yes\n";
                } else {
                    cout << "No\n";
                }
            }
        }
    }

    return 0;
}