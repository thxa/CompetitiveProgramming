#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string s; 
  cin >> s;
	vector<char> n;
	for(int i=0; i<s.size(); i++)
        if(isdigit(s[i]))
            n.push_back(s[i]);	
	sort(n.begin(), n.end());

	for(int i=0; i<n.size(); i++){
        cout<<n[i];
        if(i!=n.size()-1)
            cout<<"+";
	}
	return 0;
}
