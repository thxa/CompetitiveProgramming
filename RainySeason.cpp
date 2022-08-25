#include <iostream>
using namespace std;
int
main()
{
    string s;
    int counter=0;
    cin >> s;
    counter = (s[0] == 'R' && s[1] == 'R' && s[2] == 'R')? 3:
              (s[0] == 'S' && s[1] == 'R' && s[2] == 'R')? 2:
              (s[0] == 'R' && s[1] == 'R' && s[2] == 'S')? 2:
              (s[0] == 'R' || s[1] == 'R' || s[2] == 'R')? 1: 0;
    cout << counter << endl;
    return 0;
}
