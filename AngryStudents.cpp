#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
int
main()
{
  int t, n, take=0;
  string students;
  vector<int> angrys;
  vector<int> angry;
  cin >> t;
  while(t--) {
    cin >> n >> students;
    take=0;
    students.push_back('0');
    for(int i=0; i<n+1; i++) {
      if(students[i] == 'A') take=1;
      if(students[i] == 'P' && take) angry.push_back(1);
      else {
        angrys.push_back(angry.size());
        angry.clear();
      }
    }
    cout << *max_element(angrys.begin(), angrys.end()) << '\n';
    angrys.clear();
  }
  return 0;
}
