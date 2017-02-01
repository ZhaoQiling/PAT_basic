#include <iostream>
using namespace std;
int main()
{
    string brKey;
    string input;
    int isOut = false;
    getline(cin, brKey);
    cin >> input;
    for(int i = 0; i < input.length(); i++)
    {
        bool isFind = false;
        for(int j = 0; j < brKey.length(); j++)
        {
            if(input[i] >= 'A' && input[i] <= 'Z'
               && (brKey[j] == '+' || input[i] == brKey[j]))
            {
                isFind = true;
                break;
            }

            if(input[i] >= 'a' && input[i] <= 'z' && input[i] == 'a' + brKey[j] - 'A')
            {
                isFind = true;
                break;
            }
            if(input[i] == brKey[j])
            {
                isFind = true;
                break;
            }
        }
        if(isFind == false)
        {
            cout << input[i];
            isOut = true;
        }
    }
    if(isOut == false) cout << endl;
    return 0;
}
