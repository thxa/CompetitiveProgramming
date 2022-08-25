#include <iostream>
using namespace std;
int
main()
{
    int n, temp, is_forbidden=0;
    cin >> n;

    while(n--) {
        cin >> temp;
        if (temp==1) {
            is_forbidden = 1;
            break;
        }
    }
    is_forbidden = (is_forbidden)? -1 : 1;
    cout << is_forbidden << endl;
    return 0;
}
