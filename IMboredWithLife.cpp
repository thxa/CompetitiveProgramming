#include <iostream>
using namespace std;
int
main()
{
  int a,b;
  cin >> a >> b;
  int result =1;
  for(int i=1; i <= min(a,b); i++)
    result *= i;
  cout << result;
  return 0;
}
