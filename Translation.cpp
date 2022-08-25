#include <iostream>
#include <algorithm>
using namespace std;
int
main()
{
    string word="", word_reversed="";
    cin >> word >> word_reversed;
    string temp_word = word;

    /* for (int index1=word.length()-1, index2=0; index1>=0; index1--,index2++) */
        /* word[index1] = temp_word[index2]; */
    reverse(word.begin(), word.end());
    temp_word = word == word_reversed ? "YES": "NO";
    cout << temp_word << '\n';
    return 0;
}
