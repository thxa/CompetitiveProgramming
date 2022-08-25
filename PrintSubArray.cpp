#include <iostream>
using namespace std;
int
main()
{
    int n, temp, from, to;
    cin >> n;
    int arr[n];
    for (int index=0; index < n; index++) {
        cin >> temp;
        arr[index] = temp;
    }
    cin >> from >> to;
    for (int index=from-1; index < to; index++)
        cout << arr[index] << " ";
    cout << endl;
    return 0;
}
