#include <iostream>
#include <string>
using namespace std;
int 
left(string a, string b, int index_a, int index_b)
{
    while (index_b < b.length() && index_a >= 0) {
        if (b[index_b] == a[index_a]) {
            index_b++;
            index_a--;
        }
        else break;
    }
    if (index_b == b.length()) return 1;
    return 0;
}
 
int right(string a, string b, int index_a, int index_b)
{
    if (index_b == b.length()) return 1;
    if (index_b + 1 == b.length()) {
        if (index_a + 1 < a.length() && a[index_a + 1] == b[index_b]) return 1;
        else if (index_a - 1 >= 0 && a[index_a - 1] == b[index_b])    return 1;
        else                                                          return 0;
    }
    int r1 = 0, r2 = 0;
    if (index_a - 1 >= 0 && a[index_a - 1] == b[index_b])            r1 = left(a, b, index_a - 1, index_b);
    if (r1) return 1;
    if (index_a + 1 < a.length() && a[index_a + 1] == b[index_b])    r2 = right(a, b, index_a + 1, index_b + 1);
    return (r1 || r2);
}

int
main()
{

  int t;
  cin >> t;
  while (t--)
  {
    string a, b;
    cin >> a >> b;
    int f = 0;
    for (int index_a = 0; index_a < a.length(); index_a++)
    {
      if (a[index_a] == b[0]) {
        f = right(a, b, index_a, 1);
        if (f == 1) break;
      }
    }
    if (f)       cout << "YES\n";
    else         cout << "NO\n";
  }

  return 0;
}
