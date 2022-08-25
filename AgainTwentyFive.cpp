#include <bits/stdc++.h>
using namespace std;
int
main()
{
/* The problem of getting the last two digits is equivalent to the problem of getting the number modulo 100. */ 
/* So we need to calculate. According to the rules of modular arithmetic */
  /* (a * b) % c = ((a % c) * (b % c)) % c  */
  /* So 5^n % 100 - ((5^n-1 % 100) * 5) % 100 */

/* So Let's note that 5^2 = 25. Then And so on. */ 
/* All 5^n % 100 are equal to 25 for all n ≥ 2. So to solve the problem one need to just output 25. */ 
/* There is no need to read n. */
 /* https://codeforces.com/blog/entry/24160 */
  cout << 25;
  return 0;
}
