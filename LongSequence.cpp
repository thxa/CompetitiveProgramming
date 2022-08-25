#include <iostream>
#include <vector>
using namespace std;
int
main()
{
  int n, counter_b=0;
  long long result=0, result_b=0, counter=0, x;
  cin >> n;
  vector<int> b(n);
  for(int& i: b) {
    cin >> i;
    result_b += i;
    counter_b++;
  }
  cin >> x;
  long long times = (x/result_b) + 1;
  result = result_b * times;
  counter = counter_b * times;
  if(result < x) counter++;
  int i=b.size()-1;
  while(result>x) {
    result -= b[i--];
    counter--;
  }
  cout << ++counter;
  return 0;
}
