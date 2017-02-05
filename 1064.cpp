#include <iostream>
using namespace std;
bool isE[100];
int main()
{
    int nS;
    cin >> nS;
    string s;
    int count = 0;
    for(int i = 0; i < nS; i++)
    {
        cin >> s;
        int sum = 0;
        for(int j = 0; j < s.length(); j++)
        {
            sum += s[j] - '0';
        }
        if(isE[sum] == false) count++;
        isE[sum] = true;
        //cout << sum << endl;
    }
    int isFirst = true;
    cout << count << endl;
    for(int i = 0; i < 100; i++)
    {
        if(isE[i] == false) continue;
        if(isFirst)
        {
            cout << i;
            isFirst = false;
            continue;
        }
        cout << " " << i;
    }
    return 0;
}
