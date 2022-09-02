#include<bits/stdc++.h>
using namespace std;
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t, m, x;
  cin >> t;
  while(t--) {
    cin >> m >> x;
    cout << (m <= x? "YES":"NO") << '\n';
  }
}
