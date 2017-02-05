#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int nStu, nProb;
    cin >> nStu >> nProb;
    vector<int> fullMark(nProb);
    vector<int> rightAns(nProb);
    for(int i = 0; i < nProb; i++)
        cin >> fullMark[i];
    for(int i = 0; i < nProb; i++)
        cin >> rightAns[i];
    vector<int> stu(nStu);
    for(int i = 0; i < nStu; i++)
    {
        stu[i] = 0;
        for(int j = 0; j < nProb; j++)
        {
            int val;
            cin >> val;
            if(val == rightAns[j])
                stu[i] += fullMark[j];
        }
    }
    for(int i = 0; i < nStu; i++)
        cout << stu[i] << endl;
    return 0;
}
