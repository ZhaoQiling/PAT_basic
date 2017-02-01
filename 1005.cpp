#include <iostream>
#include <algorithm>
using namespace std;
bool axis[5000];
int main()
{
    axis[1] = true;
    int nTest;
    cin >> nTest;
    int input[150];
    for(int i = 0; i < nTest; i++)
        cin >> input[i];
    int order = 0;
    while(nTest != order)
    {
        int val = input[order];
        while(val != 1)
        {
            if(val % 2 == 0)
            {
                axis[val / 2] = true;
                val /= 2;
            }
            else{
                axis[(val * 3 + 1) / 2] = true;
                val = (val * 3 + 1) /2;
            }
        }
        order++;
    }
    int ans[150];
    int it = 0;
    for(int i = 0; i < nTest; i++)
    {
        if(axis[input[i]] == false)
        {
            ans[it] = input[i];
            it++;
        }
    }
    sort(ans, ans + it);
    it--;
    for(int i = it; i >= 0; i--)
    {
        cout << ans[i];
        if(i != 0)
            cout << " ";
    }

    return 0;
}
