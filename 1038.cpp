#include <iostream>
using namespace std;
int score[101];
int main()
{
    int nS;
    cin >> nS;
    while(nS)
    {
        int sc;
        cin >> sc;
        score[sc]++;
        nS--;
    }
    int nQ;
    cin >> nQ;
    for(int i = 1; i <= nQ; i++)
    {
        int q;
        cin >> q;
        cout << score[q];
        if(i != nQ)
            cout << " ";
    }
    return 0;
}
