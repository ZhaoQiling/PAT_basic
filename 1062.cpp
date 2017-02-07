#include <iostream>
using namespace std;
int gcd(unsigned int a,unsigned int b)
{
    while(b^=a^=b^=a%=b);
    return a;
}
int main()
{
    int sub1, super1, sub2, super2;
    int k;
    char u;
    cin >> sub1 >> u >> super1 >> sub2 >> u >> super2;
    cin >> k;
    if(double(sub1) / super1 > double(sub2) / super2)
    {
        int temp;
        temp = sub1; sub1 = sub2; sub2 = temp;
        temp = super1; super1 = super1; super1 = super2;
    }
    int ans[1500];
    int nAns = 0;
    for(int i = 1; i * super2 < k * sub2; i++)
    {
        if(sub1 * k >= super1 * i)
            continue;
        //cout << i << endl;
        if(gcd(i, k) == 1)
        {
            ans[nAns] = i;
            nAns++;
        }
    }
    for(int i = 0; i < nAns; i++)
    {
        cout << ans[i] << "/" << k;
        if(i != nAns - 1)
            cout << " ";
    }
    return 0;
}
