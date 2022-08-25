#include <iostream>
#include <vector>
using namespace std;
int
main()
{
  int n;
  cin >> n;
  vector<vector<int>> a;
  vector<int> steps(n), temp;
  for(int &step: steps) cin >> step;
  steps.push_back(0);
  for(int i=0; i< steps.size()-1; i++) {
    if(steps[i] < steps[i+1]) {
      temp.push_back(steps[i]);
    } else {
      temp.push_back(steps[i]);
      a.push_back(temp);
      temp.clear();
    }
  }
  cout << a.size() << '\n';
  for(vector<int> x: a) cout << x.back() << ' ';
  return 0;
}
