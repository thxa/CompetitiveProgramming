#include <iostream>
#include <deque>
using namespace std;
int
main()
{

  int n, d, temp;
  cin >> n >> d;
  deque<int> dequex;
  while(n--) {
    cin >> temp;
    dequex.push_back(temp);
  }
  while(d--) {
    dequex.push_back(dequex.front());
    dequex.pop_front();
  }

  for (int i=0; i<dequex.size(); i++)
    cout << dequex[i] << " ";

  return 0;
}
