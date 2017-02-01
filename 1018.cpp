#include <iostream>
using namespace std;
int ans[2][3];
//甲 胜 平 负
//乙
int time1[2][3];
//甲 B C J
//乙
int main()
{
    int nIn;
    cin >> nIn;
    while(nIn)
    {
        char a, b;
        cin >> a >> b;
        if((a == 'J' && b == 'B')
           || (a == 'B' && b == 'C')
           || (a == 'C' && b == 'J'))
        {
            ans[0][0]++;
            ans[1][2]++;
            if(a == 'C') time1[0][1]++;
            if(a == 'J') time1[0][2]++;
            if(a == 'B') time1[0][0]++;
        }
        else if(a == b)
        {
            ans[0][1]++;
            ans[1][1]++;
        }
        else{
            ans[0][2]++;
            ans[1][0]++;
            if(b == 'C') time1[1][1]++;
            if(b == 'J') time1[1][2]++;
            if(b == 'B') time1[1][0]++;
        }
        nIn--;
    }
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j <= 2; j++)
        {
            cout << ans[i][j];
            if(j != 2)
                cout << " ";
        }
        cout << endl;
    }
    for(int i = 0; i <= 1; i++)
    {
        int loc = 0;
        int max = -1;
        for(int j = 0; j <= 2; j++)
        {
            if(time1[i][j] > max)
            {
                max = time1[i][j];
                loc = j;
            }
        }
        if(loc == 0) cout << 'B';
        if(loc == 1) cout << 'C';
        if(loc == 2) cout << 'J';
        if(i != 1) cout << " ";
    }
    return 0;
}
