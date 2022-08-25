#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int
main()
{
  string n, r_n, is_palindrom="No";
  cin >> n;
  for (int index=n.length()-1; index > -1; index--) {
    if(n[index] != '0') break;
    else n.erase(index, 1);
  }
  r_n = n;
  reverse(r_n.begin(), r_n.end());
  if(n == r_n) is_palindrom = "Yes";
  cout << is_palindrom << endl;
  return 0;
}
