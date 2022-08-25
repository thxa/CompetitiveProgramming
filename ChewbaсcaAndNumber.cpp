#include <iostream>
using namespace std;
int
main()
{
  string number;
  cin >> number;
  for (int index=0; index < number.length(); index++)
    if(number[index] > '4')
      number[index] = '9' - number[index] + '0';
  if(number[0] == '0') number[0] = '9';
  cout << number << endl;
}
