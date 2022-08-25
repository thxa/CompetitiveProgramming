#include <iostream>

using namespace std;
#define toggle(a) a=!a;
int
main()
{
  int grid_len=3, light_runner=0;
  int grid[grid_len+2][grid_len+2];
  for (int row=1; row <= grid_len; row++)
    for (int col=1; col <= grid_len; col++)
      grid[row][col] = 1;

  for (int row=1; row <= grid_len; row++) {
    for (int col=1; col <= grid_len; col++) {
      cin >> light_runner;

      if(light_runner & 1) {
        toggle(grid[row][col]);
        toggle(grid[row+1][col]);
        toggle(grid[row-1][col]);
        toggle(grid[row][col+1]);
        toggle(grid[row][col-1]);
      }

    }
  }

  for (int row=1; row <= grid_len; row++) {
    for (int col=1; col <= grid_len; col++) {
      cout << grid[row][col];
    }
    cout << "\n";
  }
  return 0;
}
