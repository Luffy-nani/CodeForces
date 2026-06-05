#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;

        int count3=0;
        int count2=0;

        while(n>0 && n%3==0)
        {
            count3++;
            n=n/3;
        }

        while(n>0 && n%2==0)
        {
            count2++;
            n=n/2;
        }

        if(n>1 || count2>count3)
        {
            cout<<-1<<endl;
        }

        else
            cout<<count3+(count3-count2)<<endl;


    }
    return 0;
}
