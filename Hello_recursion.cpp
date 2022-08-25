#include <iostream>
using namespace std;

int sum(int times) {
  if (times<=0) return 0;
  int n;
  cin >> n;
  return n + sum(times-1);
}

int
main()
{
  int t, n;
  cin >> t;
  for(int index=1; index <= t; index++) {

    cin >> n;
    cout << "Case " << index << ": " <<sum(n) << endl;
  }
  return 0;
}
