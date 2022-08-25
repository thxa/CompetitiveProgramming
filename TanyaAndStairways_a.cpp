#include <iostream>
#include <vector>

using namespace std;
int
main()
{
  int n;
  cin >> n;
  vector<int> v(n), out;
  for(int &i: v) cin >> i;
  v.push_back(0);

  for(int i=0; i<v.size()-1;i++)
    if(v[i] >= v[i+1])
      out.push_back(v[i]);

  cout << out.size() << endl;
  for(int i: out)
    cout << i << ' ';
  return 0;
}
