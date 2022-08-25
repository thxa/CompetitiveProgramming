#include <iostream>
using namespace std;
int
main()
{
  int n, k, x, a;
  long long sum=0;
  cin >> n >> k >> x;
  n = n-k;
  while(n--) {
    cin >> a;
    sum += a;
  }
  sum += x * k;
  cout << sum;
  return 0;
}
