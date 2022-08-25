#include <bits/stdc++.h>
using namespace std;

void 
removeMin(priority_queue<int, vector<int>, less<int>> &pq, vector<string> &output)
{
  output.push_back("removeMin\n");
  if (!pq.empty())
    pq.pop();
}

void
insert(priority_queue<int, vector<int>, less<int>> &pq, int n, vector<string> &output)
{
  output.push_back("insert " + to_string(n) + '\n');
  pq.push(n);
}

void 
getMin(priority_queue<int, vector<int>, less<int>> &pq, int n, vector<string> &output)
{
  while(!pq.empty() && pq.top() < n) removeMin(pq, output);
  insert(pq, n, output);
  output.push_back("getMin " + to_string(n) + '\n');
}

int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n, temp;
  string op;
  priority_queue<int, vector<int>, less<int>> pq;
  vector<string> output;
  scanf("%d", &n);
  while(n--) {
    cin >> op;

    if(op == "insert") {
      cin >> temp;
      insert(pq, temp, output);
    
    } else if(op == "getMin") {
      cin >> temp;
      getMin(pq, temp, output);
    
    } else if(op == "removeMin") {
      removeMin(pq, output);
    }
  }
  cout << output.size() << '\n';
  for(string o: output) cout << o;

}
