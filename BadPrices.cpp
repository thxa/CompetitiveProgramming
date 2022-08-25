#include <iostream>
#include <climits>
using namespace std;
int
main()
{
    int times, number_of_days, price, bad_prices;
    cin >> times;
    while (times--) {
        cin >> number_of_days;
        float days[number_of_days];
        for (int day=0; day < number_of_days; day++)
            cin >> days[day];

        bad_prices=0;
        price=INT_MAX;
        for (int day=number_of_days-1; 0 <= day; day--) {
            if(price < days[day])
                bad_prices++;
            price = (price < days[day])? price: days[day];
        }

        cout << bad_prices << endl;
    }

    return 0;
}
