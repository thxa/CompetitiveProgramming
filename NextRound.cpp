#include <iostream>
using namespace std;
int
main()
{
    int n=0, k=0, round=0, counter=0;
    cin >> n >> k;
    int rounds[n];
    
    for(int index=0; index<n;index++) {
        cin >> round;
        rounds[index] = round;
    }
    for(int index=0; index<n;index++)
        if (rounds[k - 1] <= rounds[index] && rounds[index] != 0)
            counter++;

    cout << counter << endl;
    return 0;
}
