#include <iostream>                                                                                                            
using namespace std;
int
main()
{
    int n, is_lucy_number=1;
    string result;
    cin >> n;

    if(n%4==0 || n%7==0 || n%47==0 || n%74==0)
        is_lucy_number = 1;
    else
        while(n!=0){
            if (n%10==4 || n%10==7) { 
                is_lucy_number = 1;
            } else { 
                is_lucy_number = 0;
                break;
            }
            n/=10;
        }

    result = (is_lucy_number)? "YES": "NO";
    cout << result << endl;
    return 0;
}
