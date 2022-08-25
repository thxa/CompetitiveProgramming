#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t, n, m, c, x, temp;
  cin >> t;
  int l2r[100], b2t[100];
  while(t--) {
    cin >> n >>  m;
    c = 0;
    x = min(n,m);

    for(int i=0; i<n; i++) {
      cin >> temp;
      l2r[i] = temp;
    }

    for(int i=0; i< m; i++) {
      cin >> temp;
      b2t[i] = temp;
    }
  
    if (x == n) {
      for(int i=0; i < n; i++)
        if(binary_search(b2t, b2t+m, l2r[i]))
          c++;

    } else if (x==m) {
      for(int i=0; i < m; i++)
        if(binary_search(l2r, l2r+n, b2t[i])) 
          c++;
    }
    cout << c << '\n';
  }
}
