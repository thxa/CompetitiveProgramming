#include <iostream>
using namespace std;
int
main()
{
    int v,t,s,d;
    string result = "";
    cin >> v >> t >> s >> d;
    result = (d<v*t  ||  d > s*v)?  "Yes": "No";
    cout << result << endl;
    return 0;
}
