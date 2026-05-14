#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long x, y;
        cin >> n >> x >> y;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long totalChunks = 0;
        for (int i = 0; i < n; i++) {
            totalChunks += a[i] / x;
        }

        long long ans = 0;

        for (int i = 0; i < n; i++) {
            long long chunks_i = a[i] / x;

            long long final_money =
                a[i] + y * (totalChunks - chunks_i);

            ans = max(ans, final_money);
        }

        cout << ans << "\n";
    }

    return 0;
}
