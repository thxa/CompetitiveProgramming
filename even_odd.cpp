#include <iostream>
using namespace std;
int
main()
{
    long long n, k, x, result;
    cin >> n >> k;
    x =      (n&1)  ? n/2+1: n/2  ;
    result = (k<=x) ? 2*k-1: 2*(k-x);
    cout << result << endl;
    return 0;
}
