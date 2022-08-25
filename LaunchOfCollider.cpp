#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;
int
main()
{
  int n, result=INT_MAX;
  string s;
  cin >> n >> s;
  vector<int> speeds(n);
  for(int &i: speeds) cin >> i;
  for(int i=0; i<n-1; i++) 
    if (s[i] == 'R' && s[i+1]=='L') 
      result = min(result, (speeds[i+1]-speeds[i])/2);
      
  cout << (result == INT_MAX? -1: result);

  return 0;
}
