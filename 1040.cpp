#include <iostream>
#include <string>
using namespace std;
int main()
{
    long long sum = 0;
    string s;
    cin >> s;
    int countP = 0, countPA = 0;
    long long countPAT = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'P')
            countP++;
        else if(s[i] == 'A')
            countPA += countP ;
        else
            countPAT += countPA;
    }
    cout << countPAT % 1000000007;
    return 0;
}
