#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
bool isChecked[10500];
int cRank[10500];
int theRank(int val);
bool isPrime(int val);
int nStu;
int main()
{
    cin >> nStu;
    for(int i = 1; i <= nStu; i++)
        cin >> cRank[i];
    int nRe;
    cin >> nRe;
    for(int i = 1; i <= nRe; i++)
    {
        int val;
        cin >> val;
        int rank = theRank(val);
        if(isChecked[rank] == true && rank != -1)
        {
            cout << setw(4) << setfill('0') << val << ": Checked" << endl;
            continue;
        }
        isChecked[rank] = true;
        if(rank == -1)
            cout << setw(4) << setfill('0') << val << ": Are you kidding?" << endl;
        else if(rank == 1)
            cout << setw(4) << setfill('0') << val << ": Mystery Award" << endl;
        else if(isPrime(rank))
            cout << setw(4) << setfill('0') << val << ": Minion" << endl;
        else
            cout << setw(4) << setfill('0') << val << ": Chocolate" << endl;
    }
    return 0;
}
int theRank(int val)
{
    for(int i = 1; i <= nStu; i++)
    {
        if(cRank[i] == val)
            return i;
    }
    return -1;
}
bool isPrime(int val)
{
    for(int i = 2; i <= sqrt(val); i++)
        if(val % i == 0)
            return false;
    return true;
}
