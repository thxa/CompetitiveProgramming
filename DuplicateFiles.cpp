#include <functional>
#include<iostream>
#include <map>
#include <queue>
#include <vector>
using namespace std;
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t, n, id;
  string name;
  cin >> t;
  while(t--) {
    cin >> n;
    map<string, int> mp;
    while(n--) {
      cin >> name >> id;
      if (mp[name] == 0) mp[name] = id;
      else               mp[name] = min(mp[name], id);
    }
    priority_queue<int, vector<int>, greater<int>> ids;
    for(auto m: mp) ids.push(m.second);
    int l = ids.size();
    while(l--) {
      cout << ids.top() << ' ';
      ids.pop();
    }
    cout << '\n';
  }
}
