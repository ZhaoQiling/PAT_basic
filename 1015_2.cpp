#include <iostream>
#include <algorithm>
using namespace std;
struct Stu
{
    int stuNum;
    int men;//mental
    int abi;//ability
};
int nS;
int low;
int high;
Stu nl1[100500];
int n1 = 0;
Stu nl2[100500];
int n2 = 0;
Stu nl3[100500];
int n3 = 0;
Stu nl4[100500];
int n4 = 0;
int typeOfSort(const void * , const void * );
int main()
{
    cin >> nS >> low >> high;
    Stu sIn;
    while(cin >> sIn.stuNum >> sIn.men >> sIn.abi)
    {
        if(sIn.abi < low || sIn.men < low)
            continue;
        else if(sIn.men >= high && sIn.abi >= high)
        {
            nl1[n1] = sIn;
            n1++;
        }
        else if(sIn.men >= high && sIn.abi < high)
        {
            nl2[n2] = sIn;
            n2++;
        }
        else if(sIn.men < high && sIn.abi < high && sIn.men > sIn.abi)
        {
            nl3[n3] = sIn;
            n3++;
        }
        else
        {
            nl4[n4] = sIn;
            n4++;
        }
    }
    qsort(nl1, n1, sizeof(Stu), typeOfSort);
    qsort(nl2, n2, sizeof(Stu), typeOfSort);
    qsort(nl3, n3, sizeof(Stu), typeOfSort);
    qsort(nl4, n4, sizeof(Stu), typeOfSort);
    cout << n1 + n2 + n3 + n4 << endl;
    for(int i = 0; i < n1; i++)
    {
        cout << nl1[i].stuNum << " "
            << nl1[i].men << " "
            << nl1[i].abi << endl;
    }
    for(int i = 0; i < n2; i++)
    {
        cout << nl2[i].stuNum << " "
            << nl2[i].men << " "
            << nl2[i].abi << endl;
    }
    for(int i = 0; i < n3; i++)
    {
        cout << nl3[i].stuNum << " "
            << nl3[i].men << " "
            << nl3[i].abi << endl;
    }
    for(int i = 0; i < n4; i++)
    {
        cout << nl4[i].stuNum << " "
            << nl4[i].men << " "
            << nl4[i].abi << endl;
    }

}
int typeOfSort(const void * elem1, const void * elem2)
{
    const Stu* s1 = (const Stu*) elem1;
    const Stu* s2 = (const Stu*) elem2;
    if(s1->abi + s1->men > s2->abi + s2->men)
        return -1;
    else if(s1->abi + s1->men < s2->abi + s2->men)
        return 1;
    else
    {
        if(s1->men > s2->men)
            return -1;
        else if(s1-> men < s2->men)
            return 1;
        else
        {
            if(s1->stuNum < s2->stuNum)
                return -1;
            else
                return 1;
        }
    }
}
