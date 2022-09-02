#include<bits/stdc++.h>
using namespace std;
#define pp pair<int,int>
#define to_int(n) int(n) - '0'
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  string number;

  while(t--) {
    cin >> number;
    map<int, pp> mp;
    for(int i=0; i<number.size(); i++) {
      int n = to_int(number[i]);
      mp[i] = {n, 0};
    }

    for(char i: number)
      mp[to_int(i)].second++;

    int self = 1;
    for(auto m: mp) {
      if(m.second.first != m.second.second) {
        self=0;
        break;
      }
    }
    cout << (self? "self-describing": "not self-describing") << '\n';
  }
}
