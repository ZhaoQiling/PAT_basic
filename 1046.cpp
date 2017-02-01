#include <iostream>
using namespace std;
int main()
{
    int nRace;
    cin >> nRace;
    int aC = 0;
    int bC = 0;
    while(nRace)
    {
        int aG, aR, bG, bR;
        cin >> aG >> aR >> bG >> bR;
        if(aG + bG == aR && aR != bR)
        {
            bC++;
            nRace--;
            continue;
        }
        if(aG + bG == bR && aR != bR)
        {
            aC++;
            nRace--;
            continue;
        }
        nRace--;
    }
    cout << aC << " " << bC;
    return 0;
}
