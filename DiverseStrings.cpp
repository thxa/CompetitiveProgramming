#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int 
solve(string a)
{
  int index = 0;
  for(char charcter=a.front(); charcter < a.back() ; charcter++) 
    if(charcter != a[index++]) return 0;
  if (index != a.length()-1) return 0;
  return 1;
}

int
main()
{
  int n;
  cin >> n;
  while(n--) {
    string word;
    cin >> word;
    sort(word.begin(), word.end());
    if (solve(word)) cout << "Yes\n";
    else cout << "No\n";
  }
  return 0;
}
