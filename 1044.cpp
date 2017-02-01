#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
string base[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string high[13] = {"", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
int main()
{
    int N;
    cin >> N;
    cin.clear();
    cin.ignore();
    string s;
    while(N)
    {
        getline(cin, s);
        if(s[0] >= '0' && s[0] <= '9')//earth number
        {
            stringstream ss;//star
            ss << s;
            int val;
            ss >> val;
            int h = val / 13;
            int b = val % 13;
            if(h > 0 && b == 0)
                cout << high[h] << endl;
            else if(h > 0 && b != 0)
                cout << high[h] << " " << base[b] << endl;
            else
                cout << base[b] << endl;

        }
        else{//mars number
            //cout << s << endl;
            if(s.length() > 4) // high and low
            {
                int num = 0;
                for(int i = 0; i < 13; i++)
                {
                    if(equal(s.begin(), s.begin() + 3, high[i].begin()))
                    {
                        num += i * 13;
                        break;
                    }
                }
                for(int i = 0; i < 13; i++)
                {
                    if(equal(s.begin() + 4, s.end(), base[i].begin()))
                    {
                        num += i;
                        cout << num << endl;
                        break;
                    }
                }
            }
            else{
                for(int i = 0; i < 13; i++)
                {
                   if(s == base[i])
                   {
                       cout << i << endl;
                       break;
                   }
                   else if(s == high[i])
                   {
                       cout << i * 13 << endl;
                       break;
                   }
                }
            }

        }
        N--;
    }
    return 0;
}


