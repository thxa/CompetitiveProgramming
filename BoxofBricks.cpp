#include <iostream>

using namespace std;
int
main()
{
  int h, n, counter, setIndex=0;
  while(1) {
    h=0, counter=0;
    cin >> n;
    if (0>=n) exit(0);
    int box_brickt[n];
    for(int index=0; index < n; index++) {
      cin >> box_brickt[index];
      h+=box_brickt[index];
    }
    h/=n;
    for(int index=0; index < n; index++)
      if(box_brickt[index] < h)
        counter += h - box_brickt[index];

    cout << "Set #" << ++setIndex << "\n";
    cout << "The minimum number of moves is "<< counter << ".\n\n";
  }
  return 0;
}
