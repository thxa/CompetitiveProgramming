#include <iostream>
using namespace std;
int 
abs(int n)
{
    return (n < 0)? n*-1 : n;
}

int
main()
{
    int temp, x,y;
    for(int col=0; col < 5; col++) {
        for(int row=0; row < 5; row++) {
            cin >> temp;
            if (temp == 1) {
                y=col;
                x=row;
            }
        }
    }
    cout << abs(y-2) + abs(x-2) << endl;
    return 0;
}
