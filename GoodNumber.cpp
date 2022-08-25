#include <iostream>
using namespace std;

int
is_good_number(string numbers, char k)
{
  for(char number='0'; number <= k; number++) 
    if ((int)numbers.find(number) == -1) return 0;
  return 1;
}

int
main()
{
  string numbers;
  char k;
  int n, good_numbers=0;
  cin >> n >>  k;
  while(n--) {
    cin >> numbers;
    good_numbers += is_good_number(numbers, k);
  }
  cout << good_numbers << endl;
  return 0;
}
