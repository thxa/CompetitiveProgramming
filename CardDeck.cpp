#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main() {
  int t;
  cin >> t;
  while(t--){
      int n;
      cin >> n;
      vector<int> v(n);
      for (int &i: v) cin >> i;
      vector<int> arr(n+1);
      int mx = n;
      stack<int> st;
      fill(arr.begin(), arr.end(), 0);
      for (int i = n-1; i >= 0; --i) {
          st.push(v[i]);
          if(v[i] == mx){
              while (!st.empty()){
                  arr[st.top()] = 1;
                  cout << st.top() << " ";
                  st.pop();
              }
              while (arr[mx]) mx--;
          }
      }
      cout << endl;
  }
  return 0;
}
