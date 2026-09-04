#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;
#define int long long
const int N = 1e6 + 10;
const int inf = 1e15;
const int mod = 998244353;

inline void solve(){
    
    int n;cin >> n;

    vector<vector<int>> g(n);
    for(int i = 1;i < n;i += 1){
        int x;cin >> x;

        --x;
        g[i].push_back(x);
        g[x].push_back(i);
    }

    vector<int> dp(n);
    int m;cin >> m;
    vector<int> ans;

    for(int i = 0;i < m;i += 1){
        int x;cin >> x;
        --x;

        ans.push_back(x);
    }

    auto dfs = [&](auto &&dfs, int cur, int par = -1) -> void {

        if(par != -1){
            dp[cur] = 1 + dp[par];
        }

        for(auto &x : g[cur]){
            if(x == par) continue;

            dfs(dfs, x, cur);
            
        }
    };

    dfs(dfs, 0);

    int mn = ans.front();

    for(auto &x : ans){
        if(dp[x] < dp[mn]){
            mn = x;
        }   
    }

    // cout << mn << ' ';

    cout << m - 1 << ' ';
    for(auto &x : ans){
        if(x != mn){
            cout << x + 1 << ' ';
        }
    }

}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}
