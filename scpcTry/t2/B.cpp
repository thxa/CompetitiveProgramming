#include<bits/stdc++.h>
#include <vector>
using namespace std;
vector<int> SieveOfEratosthenes(int num) {
   vector<int> result;
   vector<int> pno(num+1);
   fill(pno.begin(), pno.end(), 1);
   for (int i = 2; i*i<= num; i++) {
      if (pno[i] == 1) {
         for (int j = i*2; j<= num; j += i)
          pno[j] = 0;
      }
   }
   for (int i = 2; i<= num; i++)
     if (pno[i])
       result.push_back(pno[i]);

}

int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t, n;
  cin >> t;
  while(t--) {
    vector<int> n;

  }
}
