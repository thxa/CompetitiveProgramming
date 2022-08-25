#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;
int
main()
{
    int t, n, k, sum=0;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        int a[n], b[n];
        for (int index=0; index<n; index++) cin >> a[index];
        for (int index=0; index<n; index++) cin >> b[index];

        sort(a, a+n);
        sort(b, b+n, greater<int>());

        for (int index=0; index < k; index++)
            if (a[index] < b[index]) a[index] = b[index];
        for (int index=0; index < n; index++) sum+=a[index];
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}
