#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int
main()
{
  int t, n, d;
  cin >> t;
  while(t--) {
    cin >> n >> d;
    vector<int> a(n);
    for(int& x: a) cin >> x;
    sort(a.begin(), a.end());
    cout << (a.back() <= d || a[0] + a[1] <= d? "Yes": "No") << endl;
  }
  return 0;
}

