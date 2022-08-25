#include<bits/stdc++.h>
using namespace std;
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  char c1,c2,c3;
  cin >> c1 >> c2 >> c3;
  cout << (c1 == c2 && c2 == c3 ? "Won": "Lost");
}
