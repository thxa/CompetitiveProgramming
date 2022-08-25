#include<bits/stdc++.h>
using namespace std;
#define m (int)1e6
int x[10][m];
int f(int x)
{
  if(x<10) return x;
  int p=1;
  while(x) {
    if(x%10) p*=(x%10);
    x/=10;
  }
  return f(p);
}

int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  for(int i=1; i <= m; i++)
    x[f(i)][i]++;

  for(int i=1; i<10; i++)
    for(int j=1; j<=m; j++)
      x[i][j]+=x[i][j-1];

  int q, l, r, k;
  cin >> q;
  while(q--) {
    cin >> l >> r >> k;
    cout << x[k][r] - x[k][l-1] << '\n';
  }

}
