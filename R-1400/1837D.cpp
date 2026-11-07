#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool valid(string s){
    stack<char>st;

    for(char c:s){
        if(c=='(')st.push('(');
        else{
             if (st.empty()) return false;
             st.pop();
        }
    }

    return st.empty();
}

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;

    int counto=0,countc=0;
    for(char c:s){
        if(c=='(')counto++;
        else countc++;
    }

    if(counto!=countc){
        cout<<-1<<'\n';
        return;
    }

    bool check1=valid(s);
    string dup = s;
    reverse(dup.begin(), dup.end());
    bool check2=valid(dup);

    if(check1||check2){
        cout<<1<<'\n';
		for (int i = 0; i < n; i++) cout << 1 << ' ';
		cout << '\n';
        return;
    }

    cout<<2<<'\n';
    int rev=0;
    stack<char>st;

    for(char c:s){
        if(st.empty()){
            if(c==')'){
                rev++;
                cout<<2<<" ";
            }

            if(c=='('){
                if(rev!=0){
                    rev--;
                    cout<<2<<" ";   
                }
                else{
                    st.push('(');
                    cout << 1 << " ";
                }
            }
            continue;
        }
        else{
            if(c=='(')st.push('(');
            else st.pop();

            cout<<1<<" ";
        }
    }


    return;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
