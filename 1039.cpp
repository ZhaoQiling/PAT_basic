#include <iostream>
#include <string>
using namespace std;
int shop[123];
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    for(int i = 0; i < s1.length(); ++i)
    {
        ++shop[s1[i]];
    }
    int lack = 0;
    for(int i = 0; i < s2.length(); ++i)
    {
        if(shop[s2[i]] == 0)
            lack++;
        else
            --shop[s2[i]];
    }
    if(lack == 0) cout << "Yes" << " " << s1.length() - s2.length();
    else cout << "No" << " " << lack;
    return 0;
}
