#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int nApa;
    double elec;
    int day;
    cin >> nApa >> elec >> day;
    int proEm = 0;
    int em = 0;
    for(int apa = 1; apa <= nApa; apa++)
    {
        int nRec;
        cin >> nRec;
        int lowElec = 0;
        for(int i = 0; i < nRec; i++)
        {
            double val;
            cin >> val;
            if(val < elec)
                lowElec++;
        }
        if(lowElec > nRec / 2)
            proEm++;
        if(nRec > day && lowElec > nRec / 2)
        {
            proEm--;
            em++;
        }

    }
    cout << fixed << setprecision(1) <<
        double(proEm)/nApa * 100 << "% "
        << double(em) / nApa * 100 << "%";
    return 0;
}
