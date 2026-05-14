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
       string a;
       cin>>a;

       int best=INT_MAX;

       for(int d=1;d<=n;d++)
       {
            string curr=a;
            int ops=0;

            while(true)
            {
                rotate(curr.begin(),curr.begin()+d,curr.end());
                ops++;
                if(curr==a)
                {
                    best=min(best,d*ops);
                    break;
                }
                if(ops>n)break;
            }
       }

       cout<<best<<endl;
    }

        
    return 0;
}
