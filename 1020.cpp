#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int cmp(const void * elem1, const void * elem2);
double mC[1050][3];
// 0总数 1总价 2单价
int main()
{
    int nK;
    double nD;
    cin >> nK >> nD;
    for(int i = 0; i < nK; i++)
        cin >> mC[i][0];
    for(int i = 0; i < nK; i++)
    {
        cin >> mC[i][1];
        mC[i][2] = mC[i][1] / mC[i][0];
    }
    qsort(&mC[0], nK, sizeof(mC[0]), cmp);
    double ans = 0;
    for(int i = 0; nD != 0 && i < nK; i++)//i < nK注意库存全部用光 也小于市场的情况
    {
        if(nD >= mC[i][0])
        {
            nD -= mC[i][0];
            ans += mC[i][1];
            mC[i][0] = 0;
        }
        else{//nD < mC[i][0]
            ans += mC[i][2] * nD;
            nD = 0;
        }
    //    cout << ans << endl;
    }
    printf("%.2f", ans);
    return 0;
}

int cmp(const void * elem1, const void * elem2)
{
    double *a = (double *) elem1;
    double *b = (double *) elem2;
    if(a[2] > b[2]) return -1;
    else return 1;
}
