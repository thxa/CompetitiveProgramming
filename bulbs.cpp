#include<bits/stdc++.h>
using namespace std;
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n, m, t, x;
  cin >> n >> m;
  set<int> a;
  while(n--) {
    cin >> t;
    while(t--) {
      cin >> x;
      a.insert(x);
    }
  }
  cout << (a.size() == m? "YES": "NO");
}
