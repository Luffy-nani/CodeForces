#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    long long ans = LLONG_MAX;
    for(int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        ans = min(ans, llabs(x));
    }

    cout << ans << '\n';
    return 0;
}