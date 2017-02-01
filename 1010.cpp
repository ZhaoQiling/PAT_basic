#include <iostream>
using namespace std;
int ans[10000];
int main()
{
    int nA = 1;
    int coe, index;
    cin >> coe >> index;
    if(index == 0)
    {
        cout << 0 << " " << 0;
        return 0;
    }
    else
    {
        ans[nA] = coe * index;
        nA++;
        ans[nA] = index - 1;
        nA++;
    }
    while(cin >> coe)
    {
        cin >> index;
        if(index == 0)
            continue;
        ans[nA] = coe * index;
        nA++;
        ans[nA] = index - 1;
        nA++;
    }
    nA--;
    for(int i = 1; i <= nA; i++)
    {
        cout << ans[i];
        if(i != nA)
            cout << " ";
    }
    return 0;
}
