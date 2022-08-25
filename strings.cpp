#include <iostream>
#include <string>
using namespace std;
int
main()
{
  /* C-string is 
   * char name[how many characters] =  { 'T', 'h', 'a', 'm', 'e', 'r' };
   * char name[] = "Thamer";
   * char* name = "Thamer";
   * char copyname[10];
   * for(int index=0; index < strlen(name); index++) {
   *    if (index != strlen(name)) copyname[index] = name[index];
   *    else                       copyname[index] = '\0';
   * }
   *
   * string cpp
   *
   * string name = "Thamer";
   * string a10(10, 'A');
   * name.front();
   * name.back();
   *
   * */
  
  string name(10, 'a');
  cout << name << endl;
  cout << name.front() << endl;
  cout << name.back() << endl;
  name.pop_back();
  cout << name << endl;
  name.push_back('a');
  cout << name << endl;

  return 0;
}
