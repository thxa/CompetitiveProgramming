#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;
int
main()
{
  int n;
  cin >> n;
  deque<int> a(n);
  for(int &i: a) cin >> i;

  reverse(a.begin(), a.end());

  int length = a.size();
  while(length--) {
    cout << a.front() << ' ';
    a.pop_front();
  }
  return 0;
}
