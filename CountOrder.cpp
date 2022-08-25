#include <iostream>
#include <algorithm>
using namespace std;
int
main()
{
  int n;
  cin >> n;
  int a[n], b[n], i=0, j=0;
  for(int index=0;index<n;index++) cin >> a[index];
  for(int index=0;index<n;index++) cin >> b[index];

  while(next_permutation(a, a+n)) i++;
  while(next_permutation(b, b+n)) j++;

  cout << abs(i - j) << endl;
  return 0;
}
