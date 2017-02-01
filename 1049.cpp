#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    long long nNum;
    cin >> nNum;
    double val;
    double sum = 0;
    for(long long i = 0; i < nNum; i++)
    {
        cin >> val;
        sum += val * (nNum - i) * (i + 1);
    }
    printf("%.2f", sum);
    return 0;
}
