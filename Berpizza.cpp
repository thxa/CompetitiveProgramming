#include<bits/stdc++.h>
using namespace std;

/* struct min_heap */
/* { */
/*   constexpr int operator()( pair<int, int> const&a, pair<int, int> const&b) */
/*   const noexcept */
/*   { */
/*     return a.second < b.second; */
/*   } */
/* }; */
/* priority_queue<pair<int, int>, vector<pair<int, int>>, min_heap> pq; */
/* deque<pair<int,int>> v; */

int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int Q, op, id=0, m;
  cin >> Q;


  set<pair<int,int>> t;
  set<int> ids;
  map<int, int> mp;

  while(Q--) {
    cin >> op;
    if(op == 1) {

      cin >> m;
      id++;
      ids.insert(id);
      t.insert(make_pair(m, INT_MAX - id));
      mp[id] = m;

    } else if(op == 2){

      int num = *(ids.begin());
      cout << num << ' ';
      ids.erase(num);
      t.erase(make_pair(mp[num], INT_MAX - num));
      mp.erase(num);

    } else if(op == 3){

      pair<int, int> cust = *t.rbegin();
      int n = INT_MAX-cust.second; 
      ids.erase(n);
      t.erase(cust);
      mp.erase(n);

      cout << n << ' ';

    }

  }
}
