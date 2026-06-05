#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int neg = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == -1) neg++;
        }

        int pos = n - neg;
        int ops = 0;

        // Fix product
        if (neg % 2 == 1) {
            ops++;
            neg--;
            pos++;
        }

        // Fix sum
        if (neg > pos) {
            ops += (neg - pos + 1) / 2;
        }

        cout << ops << "\n";
    }
    return 0;
}
