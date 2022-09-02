#include<bits/stdc++.h>
#include <cstdio>
using namespace std;
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t, n, q, l, r, x;
  char d;
  string s;
  cin >> t;
  while(t--) {
    cin >> n >> s >> q;
    x = n;
    while(q--) {
      cin >> l >> r >> d;
      for(int i=l-1; i<r; i++) {
        if (s[i] == d) {
          s[i] = ' ';
          x--;
        }
      }
    }

    auto a=remove(s.begin(), s.end(), ' ');
    s.erase(a);
    if (x)
      cout << s.substr(0, x) << '\n';
    else cout << "";
  }
}
