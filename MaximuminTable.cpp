#include <iostream>
using namespace std;
int
main()
{
    int n, sum=0;
    cin >> n;
    int arr[n][n];
    for (int index=0; index < n; index++) {
        arr[0][index] = 1; 
        arr[index][0] = 1;
    }

    for (int row=1; row < n; row++) {
        for (int col=1; col < n; col++) {
            sum=0;
            for (int i=0; i <= col; i++) sum += arr[row-1][i];
            arr[row][col] = sum;
        }
    }
    cout << arr[n-1][n-1] << endl;
    return 0;
}
