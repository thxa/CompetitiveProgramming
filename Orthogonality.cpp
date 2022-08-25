#include<bits/stdc++.h>
using namespace std;
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n, sum=0, x;
  cin >> n;
  vector<int> a(n), b(n), result(n);
  for(int&i: a) cin >> i;
  for(int&i: b) cin >> i;
  for(int i=0; i<n; i++) result[i] = a[i] * b[i];
  for(int i=0; i<n; i++) sum+=result[i];
  cout << (sum==0?"Yes":"No");
}
