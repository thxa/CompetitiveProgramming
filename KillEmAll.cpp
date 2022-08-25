#include<bits/stdc++.h>
using namespace std;
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int q, n, r, a[(int)1e6], result;
  cin >> q;
  while(q--) {
    cin >> n >> r;
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    n = unique(a, a+n) - a;
    result = 0;
    for(int i=n-1; i>=0; i--)
      result += (a[i] - result * r > 0);
    cout << result << '\n';
  }
}
