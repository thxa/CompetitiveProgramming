#include <iostream>
#include <string>
using namespace std;

void left(string &a, string &b, int &index_a, int &index_b)
{
  if(index_a != 0 && a[index_a-1] == b[index_b+1])
    left(a, b, --index_a, ++index_b);
}

void right(string &a, string &b, int &index_a, int &index_b)
{
  if(index_a != a.length() - 1 && a[index_a+1] == b[index_b+1])
      right(a, b, ++index_a, ++index_b);
}

int
main()
{
  string a, b, temp, result="No";
  int t, index_a=0, index_b=0;
  cin >> t;
  while(t--) {
    cin >> a >> b;
    index_a = (int)a.find(b[0]);
    index_b = 0;
    result = "Yes";
    if(index_a == -1) { 
      result = "No";
    } else {
      while(index_b < b.length() - 1) {
        if (a[index_a] == b[index_b]) {
          if(index_a != a.length()-1 && a[index_a+1] == b[index_b+1])   right(a, b, index_a, index_b);
          else if (index_a != 0 && a[index_a-1] == b[index_b+1])        left(a, b, index_a, index_b);
          else                                                      {   result="No"; break;}
        } else {
          result = "No";
          break;
        }
      }
    }
  cout << result << endl;
  }
  return 0;
}
