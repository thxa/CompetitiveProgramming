#include <iostream>
using namespace std;
int
main()
{
    string word;
    cin >> word;
    word[0] = (word[0] >= 'a')? word[0] - 32: word[0];
    cout << word << endl;
    return 0;
}
