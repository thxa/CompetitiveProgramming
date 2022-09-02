#include<bits/stdc++.h>
using namespace std;
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int q, y=1, m=2, x;
  cin >> q;
  while(q--) {
    cin >> x;
    if(y < m) y += x;
    else      m += x;
  }
  cout << __gcd(m, y);
}
