#include<bits/stdc++.h>
using namespace std;
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t, n, temp, cnt, mn, mx;
  cin >> t;
  while(t--) {
    vector<int> a;
    cin >> n;
    while(n--){
      cin >> temp;
      a.push_back(temp);
    }
    cnt = 0;

    for(int i = 0; i<a.size()-1; i++) {
      mx = max(a[i], a[i+1]);
      mn = min(a[i], a[i+1]);
      while(mn * 2 < mx) {
        cnt++;
        mn*=2;
      }
    }
    cout << cnt << '\n';
    a.clear();
  }

}
