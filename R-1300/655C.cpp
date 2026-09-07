#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int n = s.size();

    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            for(char j='a';j<='z';j++){
                if(j!=s[i-1] && (i+1==n || j!=s[i+1])){
                    s[i]=j;
                    break;
                }
            }
        }
    }

    cout << s << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}