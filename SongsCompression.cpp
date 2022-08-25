#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

int
main()
{
  int n, m, counter=0;
  long long x = 0, dx=0;
  cin >> n >> m;
  vector<pair<int,int>> a(n);
  for(int index=0; index < n; index++) {
    cin >> a[index].first >> a[index].second;
    x += a[index].first;
    dx += a[index].first - a[index].second;
  }
  sort(a.begin(), a.end(), [&](pair<int, int> a, pair<int, int> b)
                           { return a.first - a.second > b.first - b.second; });
  int index = 0;
  while(x > m) {
    if(!dx) {
      counter = -1;
      break;
    }
    x -= a[index].first - a[index].second;
    dx -= a[index].first - a[index].second;
    counter++;
    index++;
  }
  cout << counter << endl;
  return 0;
}
