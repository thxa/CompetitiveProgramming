#include <iostream>
using namespace std;
int
main()
{
    int n=0, counter=0;
    cin >> n;
    int x = n;

    while (0!=x) {
        if      (100 <= x)  x -= 100;
        else if (20  <= x)  x -= 20;
        else if (10  <= x)  x -= 10;
        else if (5   <= x)  x -= 5;
        else if (1   <= x)  x -= 1;
        counter++;
    }

    cout << counter << endl;
    return 0;
}
