#include<bits/stdc++.h>
using namespace std;
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t, n, x, r, temp;
  cin >> t;
  while(t--) {
    priority_queue<int, vector<int>, greater<int>> c;
    priority_queue<int, vector<int>, greater<int>> a;
    for(int i=0; i<5;i++) {
      cin >> temp;
      c.push(temp);
    }

    cin >> n;
    while(n--) {
      cin >> x;
      a.push(x);
    }
    r=1;
    while(!c.empty()) {
      if(c.top() < a.top()) {
        r = 0;
        break;
      }
      c.pop();
      a.pop();
    }
    cout << (r? "YES": "NO") << '\n';

  }
}
