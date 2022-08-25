#include <iostream>
using namespace std;
int
main()
{
  int n, point, counter=0, max_point, min_point;
  cin >> n >> point;
  max_point = min_point = point;
  while(--n) {
    cin >> point;
    if(max_point < point) {
      max_point = point;
      counter++;
    }
    if (min_point > point) {
      min_point = point;
      counter++;
    }
  }
  cout << counter;
  return 0;
}
