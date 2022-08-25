#include<bits/stdc++.h>
using namespace std;
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  string bin;
  cin >> bin;
  int x = bin.find('0');
  cout << (x == -1? bin.substr(1):
                    bin.substr(0, x) + bin.substr(x+1)); 
}
