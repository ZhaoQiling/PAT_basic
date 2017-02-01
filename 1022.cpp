#include <iostream>
using namespace std;
int toAny(int val, int fmt);
int s[999999];
int main()
{
    int a, b;
    int fmt;
    cin >> a >> b >> fmt;
    int loc = 0;
    int val = a + b;
    if(val == 0)
    {
        cout << 0;
        return 0;
    }
    while(val != 0)
    {
        s[loc] = val % fmt;
        val /= fmt;
        loc++;
    }
    for(int i = loc - 1; i >= 0; i--)
    {
        cout << s[i];
    }
    return 0;
}
