#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        bool correct=false;
        bool changed=true;
    

       while(changed)
       {
            changed=false;
             for(int i=1;i<n-1;i++)
            {
            
              if(a[i]>a[i-1]&&a[i]>a[i+1])
                {
                    swap(a[i],a[i+1]);
                    changed=true;
                }
            }
            if(is_sorted(a.begin(),a.end()))
                {
                    correct=true;
                    break;
                }

       }

        if(correct==false)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
        
    }

    return 0;
}