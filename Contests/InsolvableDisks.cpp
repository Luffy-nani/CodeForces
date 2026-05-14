#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        long long ans=0;
        vector<int>st;

        for(int i=0;i<n;i++){
            while(st.size()>=2){
                int j=st.back();
                int k=st[st.size()-2];
                if((long long)(a[j]-a[k])*(a[i]-a[j])<=(long long)(a[i]-a[j])*(a[j]-a[k])){
                    st.pop_back();
                }else{
                    break;
                }
            }
            if(!st.empty()){
                ans++;
            }
            st.push_back(i);
        }

        cout<<ans<<"\n";
    }

    return 0;
}
