#include <bits/stdc++.h>
using namespace std;
int
main()
{
  int Q, x;
  scanf("%d", &Q);
  vector<int> q;
  while(Q--){
    scanf("%d", &x);
    if(x == 1) {
      scanf("%d", &x);
      q.push_back(x);
    } else if(x == 2) {
      printf("%d\n", q.front());
      q.erase(q.begin());
    } else if(x == 3) {
      sort(q.begin(), q.end());
    }
  }
  return 0;
}
