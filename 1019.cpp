#include <iostream>
using namespace std;
int maxV(int );
int minV(int);
int main()
{
    int val;
    cin >> val;
    if(val % 1111 == 0)
    {
        cout << val << " - " << val << " = " << "0000";
        return 0;
    }
    if(val == 6174)
    {
        cout << "7641 - 1467 = 6174";
    }
    int ans = val;
    while(ans != 6174)
    {
        int minVal = minV(ans);
        int maxVal = maxV(ans);
        ans = maxVal - minVal;
        if(maxVal < 1000)
            cout << 0;
        if(maxVal < 100)
            cout << 0;
        if(maxVal < 10)
            cout << 0;
        cout << maxVal;

        cout << " - ";

        if(minVal < 1000)
            cout << 0;
        if(minVal < 100)
            cout << 0;
        if(minVal < 10)
            cout << 0;
        cout << minVal;

        cout << " = ";

        if(ans < 1000)
            cout << 0;
        if(ans < 100)
            cout << 0;
        if(ans < 10)
            cout << 0;
        cout << ans;
        cout << endl;
    }
    return 0;
}
int maxV(int input)
{
    char s[4] = {'0', '0', '0', '0'};
    for(int i = 3; input != 0; i--)
    {
        s[i] = input % 10 + '0';
        input /= 10;
    }
    bool isU[4];
    for(int i = 0; i < 4; i++)
        isU[i] = false;
    int val = 0;
    for(int i = 0; i < 4; i++)
    {
        int max = 0;
        int loc;
        for(int j = 0; j < 4; j++)
        {
            if(s[j] - '0' > max && isU[j] == false)
            {
                max = s[j] - '0';
                loc = j;
            }
        }
        isU[loc] = true;
        val = val * 10 + max;
 //       cout << max << endl;
    }
    return val;
}
int minV(int input)
{
    char s[4] = {'0', '0', '0', '0'};
    for(int i = 3; input != 0; i--)
    {
        s[i] = input % 10 + '0';
        input /= 10;
    }
    bool isU[4];
    for(int i = 0; i < 4; i++)
        isU[i] = false;
    int val = 0;
    for(int i = 0; i < 4; i++)
    {
        int min = 9;
        int loc;
        for(int j = 0; j <= 3; j++)
        {
            if(s[j] - '0' <= min && isU[j] == false)
            {
                min = s[j] - '0';
                loc = j;
            }
        }
        isU[loc] = true;
        val = val * 10 + min;
    }
    return val;
}
