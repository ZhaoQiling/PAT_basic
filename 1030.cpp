#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <malloc.h>
using namespace std;
int main()
{
    int nNum;
    float p;
    cin >> nNum >> p;
    int * arr = (int *) malloc(sizeof(int) * nNum);
    for(int i = 0; i < nNum; i++)
        scanf("%d", &arr[i]);
    sort(arr, arr + nNum);
    int ans = 0;
    for(int pMin = 0; pMin < nNum; pMin++)
    {
        for(int pMax = pMin + ans; pMax < nNum; pMax++)
        {
            if(arr[pMax] <= arr[pMin] * p)
            {
                if(pMax - pMin + 1 > ans)
                    ans = pMax - pMin + 1;
            }
            else break;

        }
    }
    cout << ans;
    return 0;
}
