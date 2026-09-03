#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n,k,x;
    cin>>n>>k>>x;
    vector<long long>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    sort(a.begin(),a.end());

    vector<long long>gaps;

    for(int i=0;i<n-1;i++){
        if(a[i+1]-a[i]> x)gaps.push_back(a[i+1]-a[i]);
    }

    long long ans=gaps.size()+1;
    sort(gaps.begin(),gaps.end());

    for(auto diff:gaps){
       long long numberOfStudents = (diff - 1) / x;
        if(k>=numberOfStudents){
            ans--;
            k-=numberOfStudents;
        }
        else break;
    }

    cout<<ans<<'\n';



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}