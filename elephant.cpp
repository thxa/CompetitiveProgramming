#include <iostream>
using namespace std;
int
main()
{
    int x;
    cin >> x;
    if (x <= 5) {
        cout << 1 << endl;

    } else {
        int counter = 0;
        for (int i = 0; i < x; i+=5) 
            counter++;
        cout << counter << endl;
    }
    return 0;
}
