#include <iostream>
using namespace std;
int
main()
{
    int index;
    string alphabet="abcdefghijklmnopqrstuvwxyz";
    while(cin >> index) cout << alphabet[index-1] ;
    return 0;
}
