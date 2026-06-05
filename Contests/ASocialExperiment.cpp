#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
      int n;
      cin>>n;

      int ans;
    
      if(n==2||n==3)ans=n;
      else if(n%2==0)ans=0;
      else ans=1;

      cout<<ans<<endl;

      
    }
    return 0;
}
