#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.14159
using namespace std;
int main()
{
    double R1, P1, R2, P2;
    cin >> R1 >> P1 >> R2 >>P2;
    double valueA = R1 * R2 * cos(P1 + P2);
    double valueB = R1 * R2 * sin(P1 + P2);
    if(valueA > -0.005 && valueA < 0.005)
        cout << "0.00";
    else{
        cout << fixed << setprecision(2) << valueA;
    }
    if(valueB > -0.005 && valueB < 0.005)
    {
        cout << "+0.00i" << endl;
    }
    else if(valueB > 0)
        cout << "+" << fixed << setprecision(2) << valueB << "i" << endl;
    else if(valueB < 0)
        cout << fixed << setprecision(2) << valueB << "i" << endl;
    return 0;
}
