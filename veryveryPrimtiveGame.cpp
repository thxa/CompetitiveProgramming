#include <iostream>
using namespace std;
int
main()
{
    int a,b,c;
    string result;
    cin >> a >> b >> c;
    if (c == 0)  result =  (a > b) ? "Takahashi": "Aoki";
    else         result =  (b > a) ? "Aoki": "Takahashi";
    cout << result << endl;
    return 0;
}
