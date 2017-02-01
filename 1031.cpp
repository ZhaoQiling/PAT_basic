#include <iostream>
using namespace std;
bool isR(string s);
int valBefore[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char* check = "10X98765432";
int main()
{
    int nID;
    cin >> nID;
    bool isE = false;
    while(nID)
    {
        string s;
        cin >> s;
        bool isB = false;
        for(int i = 0; i < 17; i++)
        {
            if(s[i] < '0' || s[i] > '9')
            {
                cout << s << endl;
                isE = true;
                nID--;
                isB = true;
                break;
            }
        }
        if(isB) continue;
        if(isR(s) == false)
        {
            cout << s << endl;
            isE = true;
        }
        nID--;
    }
    if(isE == false) cout << "All passed";
    return 0;
}
bool isR(string s)
{
    int sum = 0;
    for(int i = 0; i < 17; i++)
    {
        sum += (s[i] - '0') * (valBefore[i]);
    }
    sum %= 11;
    if(check[sum] == s[17])
        return true;
    return false;
}
