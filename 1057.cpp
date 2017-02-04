#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = 'a' + s[i] - 'A';
    }
    int sum = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] <'a' || s[i] > 'z')
            continue;
        sum += (s[i] - 'a') + 1;
    }
    int count1 = 0;
    int count0 = 0;
    while(sum)
    {
        if(sum % 2 == 0)
            count0++;
        else
            count1++;
        sum /= 2;
    }
    cout << count0 << " " << count1;
    return 0;
}
