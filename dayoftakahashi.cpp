#include <iostream>
using namespace std;
int
main()
{
    int a,b, counter=0;
    cin >> a >> b;
    for (int i=1; i <= a; i++)
        if(i < a || i <= b) counter++;
    cout << counter << endl;
    return 0;
}
