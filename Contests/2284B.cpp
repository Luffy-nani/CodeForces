    #include <bits/stdc++.h>
    using namespace std;

    using ll = long long;

    void solve() {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int cnt = 1;

        for(int i = n - 2; i >= 0; i--) {
            if(a[i] == a[n-1]) cnt++;
            else break;
        }

        if(cnt > k) {
            cout << "NO\n";
            return;
        }

        cout << "YES\n";
        for(int i = n-k; i < n; i++) {
            cout << a[i] << " ";
        }

        for(int i = n-k-1; i >= 0; i--) {
            cout << a[i] << " ";
        }

        cout << '\n';
    }

    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int t;
        cin >> t;

        while(t--) {
            solve();
        }
    }
