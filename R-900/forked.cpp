    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);   
           int t;
           cin>>t;
           while(t--)
           {
              long long a,b;
              long long xk,yk;
              long long xq,yq;

              cin>>a>>b;
              cin>>xk>>yk;
              cin>>xq>>yq;

              vector<pair<long long,long long>>moves={
                {a,b},{-a,b},{a,-b},{-a,-b},
                {b,a},{-b,a},{b,-a},{-b,-a}
              };

              set<pair<long long,long long>>kingPos,queenPos;

              for(auto [x,y]:moves)
              {
                kingPos.insert({xk+x,yk+y});
                queenPos.insert({xq+x,yq+y});
              }

              int ans=0;

              for(auto&p:kingPos)
              {
                if(queenPos.count(p))ans++;
              }

              cout<<ans<<endl;

           }
        

        return 0;

    }