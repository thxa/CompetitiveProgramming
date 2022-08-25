#include<bits/stdc++.h>
using namespace std;
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n, x, temp;
  vector<int> a;
  cin >> n >> x;
  while(n--) {
    cin >> temp;
    if(temp != x) a.push_back(temp);
  }
  for(int i: a) cout << i << ' ';
}
