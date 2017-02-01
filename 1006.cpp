#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if(s.length() >=3)
    {
        for(int i = 1; i <= s[s.length() - 1 - 2] - '0'; i++)
            cout << "B";
    }
    if(s.length() >= 2)
    {
        for(int i = 1; i <= s[s.length() - 1 - 1] - '0'; i++)
            cout << "S";
    }
    for(int i = 1; i <= s[s.length() -1] - '0'; i++)
        cout << i;
    return 0;
}
