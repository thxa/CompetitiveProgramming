#include <iostream>
using namespace std;
int
main()
{
    char c;
    cin >> c;
    string result = ('a'==c || 'e'==c || 'i'==c 
                            || 'o'==c || 'u'==c
                    ) ? "vowel" : "consonant";
    cout << result << endl;
    return 0;
}
