#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin>>n>>k;

        if(n==k)
        {
            cout<<0<<endl;
            continue;
        }

        unordered_set<int>visited;
        queue<pair<int,int>>q;

        q.push({n,0});
        visited.insert(n);

        int ans=-1;

        while(!q.empty())
        {
            auto [x,steps]=q.front();
            q.pop();

            if(x==k)
            {
                ans=steps;
                break;
            }

            if(x==0)break;

            int a=x/2;
            int b=(x+1)/2;

            if(!visited.count(a))
            {
                q.push({a,steps+1});
                visited.insert(a);
            }

            if(!visited.count(b))
            {
                q.push({b,steps+1});
                visited.insert(b);
            }

        }

        cout<<ans<<endl;
    }
    return 0;
}
