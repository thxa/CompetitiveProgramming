#include<bits/stdc++.h>
using namespace std;
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  double r, n;
  cin >> t;
  while(t--) {
    cin >> r >> n;
    printf("%.6f", ((r+n) * M_PI) / 2);
  }
}
