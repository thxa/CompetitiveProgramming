#include<bits/stdc++.h>
using namespace std;
int 
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./", text;

  char d;
  cin >> d >> text;
  int index = 0;

  if (d == 'R') {
    for(int i=0; i<text.size(); i++)
    {
      index = find(keyboard.begin(), keyboard.end(), text[i]) - keyboard.begin();
      if(index != 0)
        text[i] = keyboard[index - 1];
    }
  } else if ('L'){
    for(int i=0; i<text.size(); i++) {
      index = find(keyboard.begin(), keyboard.end(), text[i]) - keyboard.begin();
      if(index != keyboard.size()-1) 
        text[i] = keyboard[index + 1];
    }
  }

  cout << text << endl;
}
