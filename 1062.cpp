#include <iostream>
#include <stdio.h>
using namespace std;
int gcd(int a, int b)
{
    while(b^=a^=b^=a%=b);
    return a;
}
int main()
{
    int n1, m1, n2, m2;
    scanf("%d/%d %d/%d", &n1, &m1, &n2, &m2);
    int k;
    cin >> k;
    if(double(n1 / m1) > double(n2 / m2))
    {
        int temp;
        temp = n1; n1 = n2; n2 = temp;
        temp = m1; m1 = m2; m2 = temp;
    }
    int sub1, super1, sub2, super2;
    int superK;
    super1 = m1 * m2 * k;
    super2 = m1 * m2 * k;
    superK = m1 * m2 * k;
    sub1 = n1 * m2 * k;
    sub2 = n2 * m1 * k;
    int ansSub[1050];
    int ansSuper[1050];
    int count = 0;
    for(int i = sub1 + 1; i < sub2; i++)
    {
        int gcdValue = gcd(i, super1);
        if(super1 / gcdValue == k && super1 % gcdValue == 0 && i % gcdValue == 0)
        {
            ansSub[count] = i / gcdValue;
            count++;
        }
    }
    for(int i = 0; i < count; i++)
    {
        cout << ansSub[i] << "/" << k;
        if(i != count - 1)
            cout << " ";
    }
    return 0;
}
