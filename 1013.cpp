#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int);
int main()
{
    int m, n;
    cin >> m >> n;
    int order = 0;
    int no = 1;
    for(int i = 2; i <= 9999999; i++)
    {
        if(isPrime(i))
        {
            order++;
        }
        else
        {
            continue;
        }
        if(order < m)
            continue;
        if(order > n)
            break;

        if((no) % 10 == 0 && no != 0)
        {
            cout << i << endl;
            no++;
            continue;
        }

        if(order != n)
            cout << i <<" ";
        else
            cout << i;
        no++;

    }
    return 0;
}
bool isPrime(int val)
{
    for(int i = 2; i <= sqrt(val); i++)
        if(val % i == 0)
            return false;
    return true;
}
