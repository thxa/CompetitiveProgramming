#include<bits/stdc++.h>
using namespace std;
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  string u;
  vector<string> d;
  map<string, int> r;
  while(n--) {
    cin >> u;
    if((find(d.begin(), d.end(), u) - d.begin()) == d.size() ) {
      d.push_back(u);
      r[u] = 1;
      cout << "OK\n";
    
    } else {
      u += to_string(r[u]++);
      cout << u << '\n';
    }
  }

  /* for(string x: d) cout << x << '\n'; */
}
