#include <iostream>
using namespace std;
int
main()
{
  int t;
  string b, a;
  cin >> t;
  while(t--) {
    a="";
    cin >> b;
    if (b.length() == 2) a=b;
    else for (int index=0; index <= b.length(); index+=2)
           if (index == b.length()) a.push_back(b[index-1]);
           else                     a.push_back(b[index]);
    cout << a << "\n";
  }
  return 0;
}

