#include <iostream>
using namespace std;
int
main()
{
    int t, a, b, c, counter=0;
    cin >> t;
    while(t--) {
        cin >> a >> b >> c;
        if (2 <= a+b+c) counter++;
    }

    cout << counter << endl;
    return 0;
}
