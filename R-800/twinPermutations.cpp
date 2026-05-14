#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
       int n;
       cin>>n;
       vector<int>a(n);
       for(int i=0;i<n;i++)cin>>a[i];

       vector<int>index(n);
       iota(index.begin(),index.end(),0);

       sort(index.begin(),index.end(),[&](int i,int j){
        return a[i]<a[j];
       });

       int val=n;
       vector<int>b(n);
       for(int i=0;i<n;i++)
       {
            b[index[i]]=val--;
       }

       for(int i=0;i<n;i++)cout<<b[i]<<" ";
       cout<<"\n";
    }
    return 0;
}
