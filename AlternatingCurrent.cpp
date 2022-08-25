#include <iostream>
#include <string>
#include <stack>
using namespace std;
int
main()
{
  string str;
  stack<char> st;
  cin >> str;
  for(char c: str) {
    if(!st.empty() && st.top() == c)
        st.pop();
    else  
      st.push(c);
  }
  cout << (st.empty()? "Yes": "No");
  return 0;
}
