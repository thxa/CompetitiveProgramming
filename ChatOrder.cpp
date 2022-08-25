#include<bits/stdc++.h>
using namespace std;
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  map<string, int> mp;
  string name;
  cin >> t;
  vector<string> s(t);
  for(string &x: s) cin >> x;
  for(int i=s.size()-1; i>=0; i--) {
    if(mp[s[i]] != 1) {
      cout << s[i] << endl;
      mp[s[i]] = 1;
    }
  }
}
