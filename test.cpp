#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void 
change(int &index_a, int &index_b)
{
  index_a++;
  index_b--;
}

int 
GCD(int a, int b)
{
  while(b) {
    a%=b;
    swap(a,b);
  }
  return a;
}

int
main()
{
  /* string a, b; */
  /* int index_a=0, index_b=0; */
  /* change(index_a, index_b); */
  /* cout << index_a << index_b << endl; */
  int rot = 6;
  while(rot) {
    vector<int> a = {1,2,3, 4, 5, 6};
    rotate(a.begin(), a.begin()+rot--, a.end());
    for(int i: a) cout << i;
    cout << endl;
  }
  return 0;
}
