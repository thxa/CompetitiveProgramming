#include <iostream>
using namespace std;
int
main()
{
    int n;
    string result = "";
    cin >> n;
    result = (n == ((n)/100)+(n%100-n%10)+((n%10)*100))? "Yes":"No";
    cout << result << endl;
    return 0;
}
