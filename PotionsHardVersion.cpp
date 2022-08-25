#include <bits/stdc++.h>
using namespace std;
#define ll long long
int 
main()
{
  int steps;
  ll potion=0, potions=0, sum=0;
  priority_queue<ll , vector<ll>, greater<ll>> poor_potions;
  cin >> steps;

  while(steps--) {
    cin >> potion;
    sum+= potion;
    poor_potions.push(potion);
    potions++;

    while(sum < 0) {
      sum -= poor_potions.top();
      poor_potions.pop();
      potions--;
    }

  }
  cout << potions;

}
