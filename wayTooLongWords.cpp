#include <iostream>
using namespace std;
int
main()
{
    int t;
    string s;
    cin >> t;
    while(t--) {
        cin >> s;
        s = (s.length() > 10)? s.front() + to_string(s.length()-2) + s.back() : s;
        cout << s << endl;
    }
    return 0;
}
