#include <iostream>
using namespace std;
int
main()
{
    int a,b;
    string result = "";
    cin >> a >> b;
    result = (0<a  && 0<b)? "Alloy" : 
             (0<a && b==0)? "Gold"  :
             (a==0 && 0<b)? "Silver": "";

    cout << result << endl;
    return 0;
}
