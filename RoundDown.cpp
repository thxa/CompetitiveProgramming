#include<bits/stdc++.h>
using namespace std;
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  string x;
  cin >> x;
  cout << x.substr(0,x.find('.'));
}
