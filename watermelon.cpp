#include <iostream>
using namespace std;
int
main()
{
    int w;
    string result = "";
    cin >> w;
    result = (w % 2 == 0 && w > 2)?"YES":"NO";
    cout << result << endl;
    return 0;
}
