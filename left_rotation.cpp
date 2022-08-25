#include <iostream>
#include <vector>
using namespace std;
int
main()
{
  int n, d;
  cin >> n >> d;
  vector<int> a(n);
  for(int i=0; i<n; i++) cin >> a[i];
  while(d--) {
    a.push_back(a[0]);
    a.erase(a.begin());
  }
  for(int i=0; i<n; i++) cout << a[i] << " ";
  return 0;
}
