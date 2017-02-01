#include <iostream>
#include <string>
using namespace std;
struct Stu{
    string name;
    string stuNum;
    int score;
};
int main()
{
    Stu maxS, minS;
    maxS.score = 0;
    minS.score = 100;
    int nS;
    cin >> nS;
    while(nS)
    {
        Stu s;
        cin >> s.name >> s.stuNum >> s.score;
        if(s.score > maxS.score)
        {
            maxS.name = s.name;
            maxS.stuNum = s.stuNum;
            maxS.score = s.score;
        }
        if(s.score < minS.score)
        {
            minS.name = s.name;
            minS.stuNum = s.stuNum;
            minS.score = s.score;
        }
        nS--;
    }
    cout << maxS.name << " " << maxS.stuNum << endl
        << minS.name << " " << minS.stuNum << endl;
    return 0;
}
