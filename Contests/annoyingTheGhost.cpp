#include <bits/stdc++.h>
using namespace std;
long long mergeCount(vector<int>& idx, int l, int r) {
  if (r - l <= 1) return 0;
  int mid = (l + r) / 2;
  long long inv = mergeCount(idx, l, mid) + mergeCount(idx, mid, r);
  vector<int> tmp;
  int i = l, j = mid;
  while (i < mid && j < r) {
    if (idx[i] <= idx[j]) { tmp.push_back(idx[i++]); }
    else { inv += (mid - i); tmp.push_back(idx[j++]); } // ← key line
  }
  while (i < mid) tmp.push_back(idx[i++]);
  while (j < r) tmp.push_back(idx[j++]);
  for (int k = l; k < r; k++) idx[k] = tmp[k - l];
  return inv;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;

        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        
        vector<pair<int,int>>seq;
        for(int i=0;i<n;i++){
            seq.push_back({i,a[i]});
        }

     sort(seq.begin(), seq.end(), [](const pair<int,int>& a, const pair<int,int>& b) {
        return a.second < b.second;
    });
    bool invalid=false;
    for(int i=0;i<n;i++){
        if(b[i]>=seq[i].second){
            seq[i].second=b[i];
        }
        else{
            invalid=true;
        }
    }

    if(invalid==true){
        cout<<-1<<endl;
        continue;
    }
    int cost=0;
      sort(seq.begin(), seq.end(), [](auto& a, auto& b){ return a.second < b.second; });

  // Extract original indices — inversions in this = min swaps
  vector<int> indices(n);
  for (int i = 0; i < n; i++) indices[i] = seq[i].first;

  long long cost = mergeCount(indices, 0, n);
  cout << cost << "\n";
 }
}
