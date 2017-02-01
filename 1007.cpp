#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int);
int main()
{
    int range;
    cin >> range;
    int ans = 0;
    for(int i = 2; i + 2 <= range; i++)
    {
        if(isPrime(i) && isPrime(i + 2))
            ans++;
    }
    cout << ans;
    return 0;
}
bool isPrime(int val)
{
    for(int i = 2; i <= sqrt(val); i++)
        if(val % i == 0)
            return false;
    return true;
}
