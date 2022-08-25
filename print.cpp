#include <iostream>

using namespace std;
int main()
{
    string name;
    cin >> name;
    cout << name << endl;
    int a,b;
    cin >> a >> b;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    if (b != 0) cout << a / b << endl;
    else        cout << "Can't divide by zero" << endl;;
}
