#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int n, m, *p, min_n=1000, i=0;
  cin >> n >> m;
  int f[m];
  for (int i=0; i<m; i++) 
    cin >> f[i];
  sort(f, f+m); 
  p = f+n-1;
  while (p != f+m) 
    min_n = min(min_n, (*p++) - f[i++]);
  cout << min_n;
  return 0;
}

