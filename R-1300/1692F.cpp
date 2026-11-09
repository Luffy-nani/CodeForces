#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin>>n;

    vector<ll>a(n);
    vector<int>freq(10,0)
    for(int i=0;i<n;i++){
        cin>>a[i];
        freq[a[i]%10]++;
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++){
                if(i+j+k==3||i+j+k==13||i+j+k==23){
                    vector<int>need(10,0);
                    need[i]++;need[j]++;need[k]++;
                    bool check=true;
                    for(int i=0;i<10;i++){
                        if(freq[i]<need[i]){
                            check=false;
                            break;
                        }
                    }

                    if(check){
                        cout<<"YES"<<'\n';
                        return;
                    }
                }
            }
        }
    }

    cout<<"NO"<<'\n';
    return;


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) solve();
}
