#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll rangeAND(vector<vector<ll>>&st,int l,int r){
    int j=log2(r-l+1);
    return st[j][l]&st[j][r-(1<<j)+1];
}

void solve() {
    int n;
    cin>>n;

    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    int q;
    cin>>q;

    // USING SPARSE TREE (Advance data sturcture-->learn properly)

    int k=log2(n)+1;
    vector<vector<ll>>st(k,vector<ll>(n));

    for(int i=0;i<n;i++){
        st[0][i]=a[i];
    }

    for(int j=1;j<k;j++){
        for(int i=0;i+(1<<j)<=n;i++){
            st[j][i]=st[j-1][i]&(st[j-1][i+(1<<(j-1))]);
        }
    }


    for(int i=0;i<q;i++){
        ll k,l;
        cin>>l>>k;
        l--;

        int low=l;
        int high=n-1;

        int ans=-1;

        while(low<=high){
            int mid=low+(high-low)/2;
            if(rangeAND(st,l,mid)>=k){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }

        cout << (ans == -1 ? -1 : ans + 1) << " ";

    }

    cout<<endl;
    return ;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}
