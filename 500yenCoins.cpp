#include <iostream>
using namespace std;
int
main()
{
    int k ,x;
    string result;
    cin >> k >> x;
    result = (k*500 >= x)? "Yes": "No";
    cout << result << endl;
    return 0;
}
