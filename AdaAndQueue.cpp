#include <iostream>
#include <deque>
using namespace std;
#define EMPTY() cout << "\nNo job for Ada?"
int
main()
{
  int Q, n, r=0;
  string command;
  deque<int> ladybag;
  cin >> Q;
  while(Q--) {
    cin >> command;
    if (command == "back") {
      
      if (ladybag.empty()) EMPTY();
      else if (r&1) {
        cout << '\n' << ladybag.front();
        ladybag.pop_front();
      } else {
        cout << '\n' << ladybag.back();
        ladybag.pop_back();
      }

    } else if (command == "front") {

      if (ladybag.empty()) EMPTY();
      else if (r) {
        cout << '\n' << ladybag.back();
        ladybag.pop_back();
      } else {
        cout << '\n' << ladybag.front();
        ladybag.pop_front();
      }

    } else if (command == "reverse") {
        r = !r; 
    } else if (command == "push_back") {

      cin >> n;
      if(r) ladybag.push_front(n);
      else ladybag.push_back(n);

    } else if (command == "toFront") {

      cin >> n;
      if(r) ladybag.push_back(n);
      else ladybag.push_front(n);

    }
  }
  return 0;
}
