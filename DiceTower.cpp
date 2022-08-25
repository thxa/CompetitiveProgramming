#include <iostream>
using namespace std;
int
main()
{
  int n, x, a, b, unique=1;
  cin >> n >> x;
  while(n--) {
    cin >> a >> b;
    if(a==7-x || b==7-x | a==x || b==x) {
      unique =0;
      break;
    }
  }
  cout << (unique ? "YES" : "NO");
  return 0;
}

