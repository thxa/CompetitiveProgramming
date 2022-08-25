#include<bits/stdc++.h>
#include <queue>
using namespace std;
#define pp pair<int,int>
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  priority_queue<pp, vector<pp>, greater<pp>> pq;
  int s, n, x, y, win=1;
  cin >> s >> n;
  while(n--) {
    cin >> x >> y;
    pq.push({x, y});
  }

  int rs = pq.size();
  while(rs--) {
    if(s > pq.top().first) {
      s += pq.top().second;
      pq.pop();
    } else {
      win=0;
      break;
    }
  }
  cout << (win ? "YES":"NO");
}
