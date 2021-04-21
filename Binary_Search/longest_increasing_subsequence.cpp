#include<bits/stdc++.h>
using namespace std;
int main()
{ int n;
  cin>>n;
  vector<int> a(n);
  for(int  i=0;i<n;i++) cin>>a[i];
vector<int> v;

for (int i = 0; i < n; i++) {
    auto it = lower_bound(v.begin(), v.end(), a[i]);
    if (it != v.end()) *it = a[i];
    else v.push_back(a[i]);
}
return v.size();
}
