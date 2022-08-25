#include <iostream>
using namespace std;
int
main()
{
  string json="", noneed_chars="{, }";
  int length=0;
  getline(cin, json);
  for (int index=0; index < json.length(); index++) {
    if(noneed_chars.find(json[index])==-1) {
      length++;
      noneed_chars.push_back(json[index]);
    }
  }

  cout << length << "\n";
  return 0;
}
