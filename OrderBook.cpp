#include <algorithm>
#include<bits/stdc++.h>
#include <functional>
#include <queue>
#include <utility>
#include <vector>
using namespace std;
#define debug(n) cout << n << '\n'
#define pp pair<int,int>
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  long unsigned int s, size;
  int n, p, q;
  char d;
  map <int, int> b_books, s_books;
  cin >> n >> s;

  while(n--) {
    cin >> d >> p >> q;
    if(d == 'B')      b_books[p] += q;
    else              s_books[p] += q;
  }

  /* vector<pair<int,int>> vb; */
  /* vector<pair<int,int>> vs; */
  priority_queue<pp, vector<pp>, less<pp>> pqb;
  priority_queue<pp, vector<pp>, less<pp>> pqs;


  map<int,int>::iterator itb=b_books.begin();
  while(itb != b_books.end()) {
    /* vb.push_back({itb ->first, itb->second}); */
    pqb.push({itb->first, itb->second});
    itb++;
  }

  map<int,int>::iterator its=s_books.begin();
  while(its != s_books.end()) {
    /* vs.push_back({its ->first, its->second}); */
    pqs.push({its->first, its->second});
    its++;
  }
  /* sort(vs.begin(), vs.end(), greater<pair<int, int>>()); */
  /* sort(vb.begin(), vb.end(), greater<pair<int,int>>()); */

  /* size = min(vs.size(), s); */
  size = (pqs.size() < s)? pqs.size():s;
  /* for(long unsigned int i=0; i < size; i++) */
  /*   cout << "S " << vs[i].first << ' ' << vs[i].second << '\n'; */
  while(size--) {
    cout << "S " << pqs.top().first << ' ' << pqs.top().second << '\n';
    pqs.pop();
  }

    /* size = min(vb.size(), s); */
  size = (pqb.size() < s)? pqb.size():s;
  /* for(long unsigned int i=0; i < size; i++) */
  /*   cout << "B " << vb[i].first << ' ' << vb[i].second << '\n'; */
  while(size--) {
    cout << "B " << pqb.top().first << ' ' << pqb.top().second << '\n';
    pqb.pop();
  }
}
