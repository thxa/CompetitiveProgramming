#include<bits/stdc++.h>
using namespace std;
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n, i, B=0, C=0;
  cin >> n;
  while(n--) {
    cin >> i;
    if(i >= 0) B += i;
    else       C += i;
  }

  cout << B - C;
}
