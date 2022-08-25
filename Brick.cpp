#include <iostream>
using namespace std;
int main()
{
    int N,W,counter=0;
    cin >> N >> W;
    for (int i = W; i<=N; i+=W)
        counter++;
    cout << counter << endl;
    return 0;
}

