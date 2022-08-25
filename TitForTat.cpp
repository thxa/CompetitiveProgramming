#include<bits/stdc++.h>
using namespace std;
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t, n, k;
  cin >> t;
  int a[100];
  while(t--) {
    cin >> n >> k;
    for(int i=0; i<n; i++) cin >> a[i];
    int j=0;
    for(int i=0; i<k; i++) {
      while(j < n-1 && a[j] == 0) j++;
      if(j>= n-1) break;
      a[n-1]++;
      a[j]--;
    }
    for(int i=0; i<n; i++) cout << a[i] << ' ';
    cout << '\n';
  }
}
