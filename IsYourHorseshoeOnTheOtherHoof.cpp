#include <iostream>
#include <algorithm>
using namespace std;
int
main()
{
  int s[5], shoses_needed=3;
  for (int i=0; i < 4 ; i++) cin >> s[i];
  sort(s, s+4);
  for(int i=0; i < 3; i++)
    if (s[i] != s[i+1])
      shoses_needed--;
  cout << shoses_needed;
  return 0;
}
