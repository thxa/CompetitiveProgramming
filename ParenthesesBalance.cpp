#include <iostream>
#include <stack>
using namespace std;
int main() {
  int n;
  cin >> n;
  cin.ignore();
  while (n--) {
    string s;
    getline(cin, s);
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
       if(!st.empty() && (st.top() == '[' && s[i] == ']' || st.top() == '(' && s[i] == ')') )
         st.pop();
       else  
         st.push(s[i]);
    }  
    cout << (st.empty()? "Yes" : "No") << '\n';
  }
  return 0;
}
