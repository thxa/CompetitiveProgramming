#include <algorithm>
#include <iostream>
using namespace std;
int
main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int index=0; index < n; index++) cin >> arr[index]; 
    sort(arr, arr+n);
    for (int index=0; index < n; index++) cout << arr[index] << " ";
    return 0;
}
