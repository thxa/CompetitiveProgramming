#include <iostream>
using namespace std;
int
main()
{
    int n, temp, a, b;
    cin >> n;
    int d[n-1];
    for (int index=0; index < n-1; index++) {
        cin >> temp;
        d[index] = temp;
    }

    cin >> a >> b;
    temp = 0;
    for (int index=a-1; index < b-1; index++) 
        temp += d[index];
    cout << temp << endl;
    return 0;
}
