#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    vector<long long>a(n);
    vector<long long>b(n);

    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];

    unordered_map<long long,int>freq;

    for(int i=0;i<m;i++)freq[b[i]]++;

    long long count=0;
    long long ans=0;
    long long good=0
    long long leftIndex=0;
    for(int i=0;i<n;i++){
        if(count<m){
            if(freq[a[i]]>0){
                good++;
            }

            count++;
        }
        else{
            if(good>=k)ans++;
            if(freq[leftIndex]>0)good--;
            
            if(freq[a[i]]>0){
                good++;
            }
            leftIndex++;
        }
    }

    cout<<ans<<'\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
}