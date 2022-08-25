#include <iostream>
#include <stack>
using namespace std;
int
main()
{
  stack<int> st;
  int n, o, temp;
  scanf("%d", &n);
  while(n--) {
    scanf("%d", &o);
    if(o == 1) {
      scanf("%d", &temp);
      st.push(temp);
    } else if(o==2) {
      if(!st.empty()) st.pop();
    } else if(o==3) {
      if (st.empty()) printf("Empty!\n");
      else  printf("%d\n", st.top());

    }
  }
    return 0;
}

