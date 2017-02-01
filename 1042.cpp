#include <iostream>
using namespace std;
int times[26];
int main()
{
    string s;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            times[s[i] - 'A']++;
        }
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            times[s[i] - 'a']++;
        }
    }
    int loc;
    int max = 0;
    for(int i = 0; i < 26; i++)
    {
        if(times[i] > max)
        {
            max =times[i];
            loc = i;
        }
    }
    cout << char('a' + loc) << " " << max;
    return 0;
}
