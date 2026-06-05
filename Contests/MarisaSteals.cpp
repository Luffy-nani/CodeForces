#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        int ones = 0, twos = 0;
        int count = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x == 1)
                ones++;

            else if (x == 2)
                twos++;
            else
                count++;
        }


        int pairs = min(ones, twos);

        count += pairs;

        ones -= pairs;
        twos -= pairs;

        count += ones / 3;
        count += twos / 3;

        cout << count << '\n';
    }
}