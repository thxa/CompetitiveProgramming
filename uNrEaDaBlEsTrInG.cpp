#include<bits/stdc++.h>
using namespace std;
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  string s;
  int result = 1;
  cin >> s;
  for(int i=0; i < s.size(); i++) {
    if(i+1 & 1 && isupper(s[i]) || (i+1) % 2 == 0 && islower(s[i])) {
      result = 0;
      break;
    }
  }
    cout << (result? "Yes" : "No");
}
