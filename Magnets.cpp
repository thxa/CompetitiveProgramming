#include <iostream>
using namespace std;
int
main()
{
    int n, groups=0;
    string magnet="", temp_magnet="";
    cin >> n;
    while(n--) {
        cin >> magnet;
        if (magnet.compare(temp_magnet))
            groups++;
        temp_magnet = magnet;
    }
    cout << groups << endl;
    return 0;
}
