#include <iostream>
using namespace std;
int main()
{
    string ral, input;
    string ans;
    cin >> ral >> input;
    for(int i = 0; i < ral.length(); i++)
    {
        if(ral[i] >= 'a' && ral[i] <= 'z')
        {
            ral[i] = 'A' + ral[i] - 'a';
        }
    }
    for(int i = 0; i < input.length(); i++)
    {
        if(input[i] >= 'a' && input[i] <= 'z')
        {
            input[i] = 'A' + input[i] - 'a';
        }
    }
    for(int i = 0; i < ral.length(); i++)
    {
        bool isC = false;
        for(int j = 0; j < ans.length(); j++)
        {
            if(ral[i] == ans[j]) isC = true;
        }
        if(isC) continue;
        bool isFind = false;
        for(int j = 0; j < input.length(); j++)
        {
            if(ral[i] == input[j])
            {
                isFind = true;
            }
        }
        if(isFind == false) ans = ans + ral[i];
        //cout << ans <<endl;
    }
    cout << ans;
    return 0;
}
