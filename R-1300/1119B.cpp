#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n,h;
    cin>>n>>h;
    vector<long long>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    int low=0;
    int high=n-1;
    int ans;
    
    while(low<high){
        int mid=low+(high-low+1)/2;
        vector<int>temp(a.begin(),a.begin()+mid+1);
        sort(temp.begin(),temp.end());

        int p=mid;
        long long height=0;

        while(p>=0){
            height+=temp[p];
            p-=2;
            if(height>h)break;
        }

        if(height>h)high=mid-1;
        else low=mid;
    }

    cout<<low+1<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}