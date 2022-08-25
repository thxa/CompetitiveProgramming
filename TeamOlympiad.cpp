#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int
main()
{
  int n;
  cin >> n;
  vector<int> childern(n);
  queue<int> ones, twos, threes;
  for(int i=0; i<n; i++) {
    cin >> childern[i];
    if      (childern[i] == 1) ones.push(i+1);
    else if (childern[i] == 2) twos.push(i+1);
    else if (childern[i] == 3) threes.push(i+1);
  }
  int length = min(ones.size(), min(twos.size(), threes.size()));
  cout << length << '\n';
  while(length--) {
    cout << ones.front() << ' ' << twos.front() << ' ' << threes.front() << '\n';
    ones.pop(); twos.pop(); threes.pop();
  }
  return 0;
}
