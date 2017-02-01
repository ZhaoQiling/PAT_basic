#include <iostream>
#include <algorithm>
using namespace std;
int nS, low, high;
// 0 type 1 sno 2 men 3 abi
int cmp(const void *a_t, const void *b_t)
{
    int * a = (int *)a_t, *b = (int *)b_t;
    if(a[0] != b[0])
        return a[0] - b[0];
    else if(a[2] + a[3] != b[2] + b[3])
        return (b[2] + b[3] - a[2] + a[3]);
    else if(a[2] != b[2])
        return (b[2] - a[2]);
    else
        return (a[1] - b[1]);
}
int main()
{
    cin >> nS >> low >> high;
    int namelist[nS][4];
    int type, sno, men, abi;
    int order = 0;
    for(int i = 0; i < nS; i++)
    {
        cin >> sno >> men >> abi;
        if(men < low || abi < low)
            continue;
        if(men >= high && abi >= high)
            namelist[order][0] = 1;
        else if(men >= high && abi < high)
            namelist[order][0] = 2;
        else if(men < high && abi < high && men >= abi)
            namelist[order][0] = 3;
        else
            namelist[order][0] = 4;

        namelist[order][1] = sno;
        namelist[order][2] = men;
        namelist[order][3] = abi;
        order++;
    }
    qsort(&namelist[0], order, sizeof(namelist[0]), cmp);
    cout << order << endl;
    for(int i = 0; i < order; i++)
    {
        cout << namelist[i][1] << " "
                << namelist[i][2] << " "
                << namelist [i][3] << endl;
    }
    return 0;
}
