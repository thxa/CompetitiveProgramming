#include <bits/stdc++.h>
using namespace std;
int
main()
{
  int number_of_solders, solder, max_number=0, max_number_index=0, min_number=INT_MAX, min_number_index=0;
  
  cin >> number_of_solders;
  int solders[number_of_solders];
  
  for(solder=0; solder < number_of_solders; solder++) {
    cin >> solders[solder];
    if(solders[solder] > max_number){
      max_number = solders[solder];
      max_number_index = solder;
    }

    if(solders[solder] <= min_number){
      min_number = solders[solder];
      min_number_index = solder;
    }
  }

  min_number_index++;
  if (!(max_number_index < min_number_index)) max_number_index--;
  solder = max_number_index + number_of_solders - min_number_index; 
  cout << solder;
  return 0;
}

