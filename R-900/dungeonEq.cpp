#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    while (n--) {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];

        int count=0;
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++)
            freq[a[i]]++;
        
        for(auto&p:freq)
        {
            if(p.first>p.second)count+=p.second;
            else if(p.first<p.second)count+=p.second-p.first;
        }

        cout<<count<<endl;
    }
    return 0;
}
