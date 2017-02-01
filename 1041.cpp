#include <iostream>
using namespace std;
struct Stu{
    string id;
    int test;
    int fin;
};
Stu ps[1500];
int main()
{
    int nS;
    cin >> nS;
    for(int i = 0; i < nS; i++)
    {
        cin >> ps[i].id >> ps[i].test >> ps[i].fin;
    }
    int nQ;
    cin >> nQ;
    for(int i = 0; i < nQ; i++)
    {
        int num;
        cin >> num;
        for(int j = 0; j < nS; j++)
        {
            if(ps[j].test == num)
            {
                cout << ps[j].id << " " << ps[j].fin << endl;
            }
        }
    }
    return 0;
}
