#include <iostream>
using namespace std;
int
main()
{
    int number_of_groups, groups=0, one=0, two=0, three=0, taxi=0, temp=0;
    cin >> number_of_groups;
    while(number_of_groups--) {
        cin >> groups;
        if      (groups == 4) taxi++;
        else if (groups == 3) three++;
        else if (groups == 2) two++;
        else if (groups == 1) one++;
    } 
    taxi  += three;
    one -= three;
    taxi  += two / 2;
    if(two&1) {   
      taxi++;
      one -= 2;
    }
    while(one > 0){
        taxi++;
        one -= 4;
    }
    cout << taxi << endl;
    return 0;
}
