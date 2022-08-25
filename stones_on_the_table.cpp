#include <iostream>

using namespace std;
int
main()
{
  int t, red=0, green=0, blue=0, rock_need_to_remove=0;
  string rocks;
  cin >> t >> rocks;
  for(char rock: rocks) {
    if (rock == 'R') {
      red   += 1;
      green = 0;
      blue = 0;
    } else if (rock == 'B') {
      red   = 0;
      blue  += 1;
      green = 0;
    } else if (rock == 'G') {
      red   = 0;
      blue  = 0;
      green += 1;
    }

    if      (red   > 1) rock_need_to_remove += 1;
    else if (blue  > 1) rock_need_to_remove += 1;
    else if (green > 1) rock_need_to_remove += 1;
  }
  cout << rock_need_to_remove << endl;
  return 0;
}
