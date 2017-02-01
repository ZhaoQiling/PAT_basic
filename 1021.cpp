#include <iostream>
using namespace std;
int tim[10];
int main()
{
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++)
    {
        tim[s[i] - '0']++;
    }
    for(int i = 0; i < 10; i++)
    {
        if(tim[i] == 0) continue;
        cout << i << ":" << tim[i] << endl;
    }
    return 0;
}
