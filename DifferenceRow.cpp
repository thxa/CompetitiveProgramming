#include<bits/stdc++.h>
using namespace std;
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> a(n);
  for(int& i: a) cin >> i;
  sort(a.begin(), a.end());
  swap(a.front(), a.back());
  for(int i: a) cout << i << ' ';
}
