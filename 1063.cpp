#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdio.h>
using namespace std;
int main()
{
    int nVal;
    cin >> nVal;
    int a, b;
    double max = 0;
   // cin >> max;
    for(int i = 0; i < nVal; i++)
    {
        cin >> a >> b;
        double val = sqrt(a * a + b * b);
        if(val > max) max = val;
    }
    //if(max * 100 - int(max * 100) >= 0.5)
    //    max += 0.01;
    //printf("%f\n", max);
    printf("%.2f", max);
    return 0;
}
