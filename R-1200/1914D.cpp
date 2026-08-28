#include <bits/stdc++.h>
using namespace std;

vector<int>findMax3(vector<int>&arr){
     int n=arr.size();
    vector<pair<int,int>>store(n);

    for(int i=0;i<n;i++){
        store[i].first=arr[i];
        store[i].second=i;
    }

    sort(store.rbegin(),store.rend());
    vector<int>ans(3);
    for(int i=0;i<3;i++)ans[i]=store[i].second;
    return ans;
}

void solve() {
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>b(n);
    for(int i=0;i<n;i++)cin>>b[i];
    vector<int>c(n);
    for(int i=0;i<n;i++)cin>>c[i];

    vector<int>maxa=findMax3(a);
    vector<int>maxb=findMax3(b);
    vector<int>maxc=findMax3(c);

    int ans=0;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                int x=maxa[i];
                int y=maxb[j];
                int z=maxc[k];
                if(x==y || y==z || z==x)continue;
                else{
                    ans=max(ans,a[x]+b[y]+c[z]);
                }
            }
        }
    }
    cout<<ans<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}