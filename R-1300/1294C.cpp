#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin>>n;

    unordered_set<long long>a;

    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            a.insert(i);
            if(i!=n/i)a.insert(n/i);
        }
    }

    if(a.size()>=3){cout<<"YES"<<'\n';
    int count = 0;
    for (auto it = a.begin(); it != a.end() && count < 3; ++it, ++count) {
        cout << *it << " "; // Your logic here
    }
    cout<<endl;
    }
    else cout<<"NO"<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;

    cin>>t;
    while(t--)solve();

    return 0;
}