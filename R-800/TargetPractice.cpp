#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
       vector<vector<char>>arrow(10,vector<char>(10));  
       for(int i=0;i<10;i++)
       {
        for(int j=0;j<10;j++)
        {
            cin>>arrow[i][j];
        }
       }

       int sum=0;
       for(int i=0;i<10;i++)
       {
        for(int j=0;j<10;j++)
        {
            if(arrow[i][j]=='X')
            {
                 sum += min({i + 1, j + 1, 10 - i, 10 - j});  
            }
        }
       }
       cout<<sum<<endl;
    }

        
    return 0;
}
