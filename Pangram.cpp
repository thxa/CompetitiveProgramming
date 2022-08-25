#include <iostream>
#include <string>
using namespace std;
int
is_pangram(string s) {
  for (char charcter = 'a'; charcter <= 'z' ; charcter++) {
    int pos = s.find(charcter);
    if(pos == -1) pos = s.find(toupper(charcter));
    if(pos == -1 ) return 0;
  }
  return 1;
}

int
main()
{
  int n;
  string s;
  cin >> n >> s;

  s = (is_pangram(s))? "YES": "NO";
  cout << s << endl;
  return 0;
}
