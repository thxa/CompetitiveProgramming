#include <iostream>
#include <vector>
using namespace std;

void print_v(vector<int> v) {
  cout << v.size() << " ";
  for(auto x: v) cout << x << " ";
  cout << "\n";
}

int
main()
{
  int n, temp;
  cin >> n;
  vector<int>  v1, v2, v3;
  for(int i=0; i<n;i++) {  
    cin >> temp;
    if      (temp<0) v1.push_back(temp);
    else if (temp>0) v2.push_back(temp);
    else             v3.push_back(temp);
  }

  if(v1.size() % 2 == 0) {
    v3.push_back(v1.back());
    v1.pop_back();
  }

  if(v2.empty()) {
    v2.push_back(v1.back());
    v1.pop_back();
    v2.push_back(v1.back());
    v1.pop_back();
  }
  print_v(v1);
  print_v(v2);
  print_v(v3);
  return 0;
}
