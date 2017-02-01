#include <iostream>
using namespace std;
void day(int);
void hour(char);
int main()
{
    string s[4];
    for(int i = 0; i <= 3; i++)
        cin >> s[i];
    bool isF = true;
    for(int i = 0; i < s[0].length()&& i < s[1].length(); i++)
    {

        if(s[0][i] == s[1][i] && isF && s[0][i] >= 'A' && s[0][i] <= 'G' && isF == true)
        {
            day(s[0][i] - 'A');
            isF = false;
            continue;
        }
        if(s[0][i] == s[1][i] && isF == false&& ((s[0][i] >= '0' && s[0][i] <= '9') ||(s[0][i] >= 'A' && s[0][i] <= 'N')))
        {
            hour(s[0][i]);
            break;
        }

    }
    for(int i = 0; i < s[2].length() && i < s[3].length(); i++)
    {
        if(s[2][i] == s[3][i] &&
           ((s[2][i] >= 'A' && s[2][i] <= 'Z') ||(s[2][i] >= 'a' && s[2][i] <= 'z') ))
        {
            if(i <= 9)
                cout << 0 << i;
            else
                cout << i;
        }
    }
    return 0;
}
void day(int val)
{
    switch(val)
    {
    case 0:
        cout << "MON ";
        break;
    case 1:
        cout << "TUE ";
        break;
    case 2:
        cout << "WED ";
        break;
    case 3:
        cout << "THU ";
        break;
    case 4:
        cout << "FRI ";
        break;
    case 5:
        cout << "SAT ";
        break;
    case 6:
        cout << "SUN ";
        break;
    }
}
void hour(char c)
{
    if(c >= '0' && c <= '9')
        cout << 0 << c - '0' << ":";
    else
        cout << c - 'A' + 10 << ":";
}
