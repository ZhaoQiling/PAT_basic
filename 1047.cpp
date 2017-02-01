#include <iostream>
#include <stdio.h>
using namespace std;
int ans[10500];
int main()
{
    int nM;
    cin >> nM;
    for(int i = 0; i < nM; i++)
    {
        int team, member, score;
        scanf("%d-%d %d", &team, &member, &score);
        ans[team] += score;
    }
    int loc;
    int max = 0;
    for(int i = 1; i <= 1000; i++)
    {
        if(ans[i] > max)
        {
            max = ans[i];
            loc = i;
        }
    }
    cout << loc << " " << max;
    return 0;
}
