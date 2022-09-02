#include<bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  priority_queue<int, vector<int>, greater<int>> pq;
  pq.push(1);
  pq.push(2);
  pq.push(3);
  pq.push(4);
  cout << pq.top();
}
