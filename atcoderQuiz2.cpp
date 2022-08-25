#include <iostream>
using namespace std;
int
main()
{
    int x, result;
    cin >> x;
    result = (x < 40)? 40 - x:
             (x < 70)? 70 - x:
             (x < 90)? 90 - x: 0;
    if (result == 0) cout << "expert" << "\n";
    else              cout <<  result   << "\n";
    return 0;
}
