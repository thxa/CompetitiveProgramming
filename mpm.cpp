#include <iostream>
using namespace std;

int max(int a, int b) { return (a>b)?a:b; }
int
main()
{
    int a,b, m;

    cin >> a >> b;
    m = max(a+b,a-b);
    m = max(m, a*b);
    cout << m << endl;
    return 0;
}
