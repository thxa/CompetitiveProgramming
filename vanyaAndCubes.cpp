#include <iostream>
using namespace std;
int
main()
{
    long long cubes, cubes_counter=0;
    int level = 0;
    cin >> cubes;
    while(cubes_counter<=cubes) {
        level++;
        cubes_counter += (level*(level+1))/2;
    }
    cout <<  level-1 << endl;
    return 0;
}
