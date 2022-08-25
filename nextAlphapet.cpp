#include <iostream>

using namespace std;
int
main()
{
    char n;
    cin >> n;
    n = (n == 'z')? n - 25: n+1;
    cout << (char)n << endl;
    return 0;
}
