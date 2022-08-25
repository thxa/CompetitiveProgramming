#include<bits/stdc++.h>
using namespace std;
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t, n, es, result;
  cin >> t;
  while(t--) {
    cin >> n;
    es = n+2;
    vector<int> a(es), b(es), d(es,0);

    for(int i=1; i<=n; i++)
     cin >> a[i];
    
    for(int i=1; i<=n; i++) {
      cin >> b[i];
      d[i] = b[i] - a[i];
    }
    
    int cnt=0;
    for(int i=0; i<es-1; i++) {
      if(d[i] < 0) {
        cnt=3;
        break;
      }
      if(d[i] != d[i+1])
        cnt++;
    }

    cout << (cnt <= 2 ? "Yes": "No") << '\n';
  }
}
