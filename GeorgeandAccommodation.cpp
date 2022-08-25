#include <iostream>
using namespace std;
int
main()
{
    int t, p, q, counter=0;
    cin >> t;
    while(t--) {
        cin >> p >> q;
        if (p+2 <= q) counter++;
    }
    cout << counter << endl;
    return 0;
}
