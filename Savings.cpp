#include<bits/stdc++.h>
using namespace std;
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n, cnt =0;
  cin >> n;
  unsigned long long int x=0;
  for(int i=1; x<n ; i++) {
    x+= i;
    cnt++;
  }
  cout << cnt;
}
