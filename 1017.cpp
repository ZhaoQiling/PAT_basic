#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int num;
    cin >> num;
    int quotient[1500];
    int rest = 0;
    for(int i = 0; i < s.length(); i++)
    {
        quotient[i] = (rest * 10 + s[i] - '0') / num;
        rest = (rest * 10 + s[i] - '0') % num;
    }
    int start = 0;
    if(quotient[0] == 0 && quotient[1] != 0)
    {
        start = 1;
    }
    for(int i = start; i < s.length(); i++)
    {
        cout << quotient[i];
    }
    cout << " ";
    cout << rest;
    return 0;
}
