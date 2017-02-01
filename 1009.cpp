#include <iostream>
#include <string>
using namespace std;
string s[100000];
int main()
{
    int m = 0;
    while(cin >> s[m])
    {
        m++;
    }
    m--;
    for(int i = m; i >= 0; i--)
    {
        cout << s[i];
        if(i != 0)
            cout << " ";
    }
}
