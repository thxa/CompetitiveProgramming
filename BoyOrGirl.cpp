#include<bits/stdc++.h>
using namespace std;
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  string name;
  map<char, int> m;
  cin >> name;
  for(int i=0; i < name.size(); i++)
    m[name[i]]++;
  cout << (m.size() % 2 == 0? "CHAT WITH HER!" : "IGNORE HIM!") << '\n';
}

