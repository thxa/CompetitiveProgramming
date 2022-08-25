#include <iostream>
#include <utility>
#include <queue>
using namespace std;
int
main()
{
  int n, m, candy_wanted;
  cin >> n >> m;
  queue<pair<int, int>> q;
  for(int i = 0; i < n; i++) {
    cin >>candy_wanted;
    pair<int, int> child(i+1, candy_wanted);
    q.push(child);
  }

  while(q.size() > 1) {
    if(q.front().second <= m) {
      q.pop();
    } else {
      q.front().second -= m;
      q.push(q.front());
      q.pop();
    }
  }

  cout << q.front().first << endl;
  return 0;
}
