#include <iostream>
using namespace std;
int
main()
{
    int t, x=0;
    string opertaion;
    cin >> t;
    while(t--) {
        cin >> opertaion;
        if (opertaion.find("+") != -1)  x++;
        else                            x--;
    }
    cout << x << endl;
    return 0;
}
