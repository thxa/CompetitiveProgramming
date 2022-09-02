#include<iostream>
using namespace std;
int 
main()
{
  int t, cnt;
  string s;
  cin >> t;
  while(t--) {
    cin >> s;
    cnt = 0;
    for(char i:s) {
      if(i == 'U') cnt++;
      else         break;
    }
    cout << cnt << '\n';
  }
}
