#include <iostream>
using namespace std;
int
main()
{
    int number_of_wires, number_of_shots_bireds=0, shoted_birds=0, wire=0;
    cin >> number_of_wires;
    int birds_on_wires[number_of_wires+2];
    birds_on_wires[0] = birds_on_wires[number_of_wires+1] = 0;


    for(wire=1; wire <= number_of_wires;wire++) cin >> birds_on_wires[wire];

    cin >> number_of_shots_bireds;
    while(number_of_shots_bireds--) {
        cin >> wire >> shoted_birds;  
        if (birds_on_wires[wire] >= shoted_birds) {
            birds_on_wires[wire-1] += shoted_birds-1;
            birds_on_wires[wire+1] += birds_on_wires[wire] - shoted_birds;
            birds_on_wires[wire] = 0;
        }
    }

    for(wire=1; wire <= number_of_wires; wire++) cout << birds_on_wires[wire] << "\n";
    return 0;
}
