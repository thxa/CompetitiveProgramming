#include <bits/stdc++.h>
using namespace std;
#define N 100005

void createHash(set<int>& hash,
                int maxElement)
{
    int prev = 0, curr = 1;
    hash.insert(prev);
    hash.insert(curr);
 
    while (curr <= maxElement) {
        int temp = curr + prev;
        hash.insert(temp);
        prev = curr;
        curr = temp;
    }
}
 
int 
longestFibonacciSubsequence(vector<int> arr)
{
    set<int> hash;
    createHash(
        hash,
        *max_element(arr.begin(), arr.end()));
    int answer = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (hash.find(arr[i])
            != hash.end()) {
            answer++;
        }
    }
    return answer;
}
 
// Driver code
int main()
{
  int t, n;
  cin >> t;
  while(t--)
    cin >> n;
    vector<int> a(n);
    for(int &i: a) cin >> i;
    cout << longestFibonacciSubsequence(a) << endl;
    return 0;
}
