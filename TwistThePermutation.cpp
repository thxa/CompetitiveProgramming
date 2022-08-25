#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int
main()
{
  int t, n;
  cin >> t;
  while(t--) {
    cin >> n;
    vector<int> a(n), ans(n);
    for(int&i : a) cin >> i;
    for(int i=n-1; i>0; i--) {
      int pos = find(a.begin(), a.end(), i+1) - a.begin();
      int shift = (pos+1) % (i+1);
      ans[i] = shift;
      rotate(a.begin(), a.begin() + shift, a.begin()+i+1);
    }
    for(int i : ans) cout << i << ' ';
    cout << endl;
  }
  return 0;
} 


