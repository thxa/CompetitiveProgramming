#include<bits/stdc++.h>
using namespace std;
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n, s, d, x, y, c=0;
  cin >> n >> s >> d;
  while(n--) {
    cin >> x >> y;
    if(x < s && y > d) {
      c=1;
      break;
    }
  }
  cout << (c? "Yes": "No");
}
