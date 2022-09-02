#include<bits/stdc++.h>
using namespace std;
int 
main()
{
  unsigned int N = 1e9;
  unsigned int low=0, high=N+1, mid;
  char c;
  while(1) {
    mid = (low+high) / 2;
    cout << mid << '\n';
    cout.flush();
    cin >> c;
    if(c == '>') {
      low = mid +1;
    } else if (c == '<') {
      high = mid -1;
    } else {
      cout << "! " << mid;
      break;
    }
  }
}
