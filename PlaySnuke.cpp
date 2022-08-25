#include<bits/stdc++.h>
using namespace std;
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n, a, p, x, mpr= INT_MAX;
  cin >> n;
  while(n--) {
    cin >> a >> p >> x;
    if(a < x) mpr = min(mpr, p);
  }
  cout << (mpr == INT_MAX ? -1: mpr);
}
