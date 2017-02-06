#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
int couple[100500];
bool isParty[100500];
int ans[100500];
int main()
{
    int nCouple;
    cin >> nCouple;
    for(int i = 0; i < nCouple ; i++)
    {
        int a, b;
        cin >> a >> b;
        couple[a] = b;
        couple[b] = a;
    }
    int nParty;
    cin >> nParty;
    for(int i = 0; i < nParty; i++)
    {
        int val;
        cin >> val;
        isParty[val] = true;
    }

    int nSingle = 0;
    for(int i = 0; i < 100500; i++)
    {
        if(isParty[i] == false)
            continue;
        if(isParty[couple[i]] == false)
        {
            ans[nSingle] = i;
            nSingle++;
        }
    }
    if(nSingle == 0)
    {
        cout << 0;
        return 0;
    }
    cout << nSingle << endl;
    sort(ans, ans + nSingle);
    for(int i = 0; i < nSingle; i++)
    {
        cout << setw(5) << setfill('0') << ans[i];
        if(i != nSingle - 1)
            cout << " ";
    }
    return 0;
}
