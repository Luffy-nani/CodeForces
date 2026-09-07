#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<pair<int,int>> a(n);

    long long sum = 0;

    for(int i=0;i<n;i++){
        cin >> a[i].first;
        a[i].second = i+1;
        sum += a[i].first;
    }

    sort(a.begin(),a.end());

    vector<int> ans;

    for(int i=0;i<n;i++){
        long long sum_dup = sum - a[i].first;

        if(i != n-1){
            if(a[n-1].first * 2 == sum_dup){
                ans.push_back(a[i].second);
            }
        }
        else{
            if(n > 2 && a[n-2].first * 2 == sum_dup){
                ans.push_back(a[i].second);
            }
        }
    }

    cout << ans.size() << '\n';

    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }

    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}