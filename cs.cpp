#include <iostream>
using namespace std;
int
main()
{
    int n;
    string result;
    cin >> n;

         if (n==1) result="one";
    else if (n==2) result="two";
    else if (n==3) result="three";
    else if (n==4) result="four";
    else if (n==5) result="five";
    else if (n==6) result="six";
    else if (n==7) result="seven";
    else if (n==8) result="eight";
    else if (n==9) result="nine";
    else           result="Greater than 9";

    cout << result << endl;
    return 0;
}
