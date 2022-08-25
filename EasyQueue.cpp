#include <iostream>
#include <queue>
using namespace std;
int
main()
{
  queue<int> q;
  int n, o, temp;
  scanf("%d", &n);
  while(n--) {
    scanf("%d", &o);
    if(o == 1) {
      scanf("%d", &temp); 
      q.push(temp);
    } else if(o==2) { 
      if(!q.empty()) q.pop();
    } else if(o==3) {
      if (q.empty()) printf("Empty!\n");
      else  printf("%d \n", q.front());

    }
  }
    return 0;
}
