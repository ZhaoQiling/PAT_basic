#include <iostream>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    if(a.length() < b.length())
    {
        int n = b.length() - a.length();
        string u;
        for(int i = 1; i <= n; i++)
        {
            u = u + '0';
        }
        a = u + a;
    }
    if(a.length() > b.length())
    {
        int n = a.length() - b.length();
        string u;
        for(int i = 1; i <= n; i++)
        {
            u = u + '0';
        }
        b = u + b;
    }
    //cout << a << endl;
    //cout << b << endl;
    for(int i = 1; i <= a.length() && i <= b.length(); i++)
    {
        int locA = a.length() - i;
        int locB = locA;
        if(i % 2 == 1)
        {
            int val = a[locA] - '0' + b[locB] - '0';
            val %= 13;
            if(val == 10) {b[locB] = 'J'; continue;};
            if(val == 11) {b[locB] = 'Q'; continue;};
            if(val == 12) {b[locB] = 'K'; continue;};
            b[locB] = val + '0';
        }
        else{
            int val = b[locB] - a[locA];
            if(val < 0) val += 10;
            b[locB] = val + '0';
        }
    }
    cout << b;
    return 0;
}
