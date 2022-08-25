#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int arr[n+3];
    arr[0] = arr[n+1] = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        if(arr[x] >= y){
            arr[x-1] += y-1;
            arr[x+1] += arr[x] - y;
            arr[x] = 0;
        }
    }
    for (int i = 1; i <= n; ++i) {
        cout << arr[i] << endl;
    }
    return 0;
}
