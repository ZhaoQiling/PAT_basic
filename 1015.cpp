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
Stu namelist[100500];
int typeOfSort(const void * s1, const void * s2);
int main()
{
    cin >> nS >> low >> high;
    Stu sIn;
    int order = 0;
    while(cin >> sIn.stuNum >> sIn.men >> sIn.abi)
    {
        if(sIn.abi < low || sIn.men < low)
            continue;
        namelist[order].stuNum = sIn.stuNum;
        namelist[order].men = sIn.men;
        namelist[order].abi = sIn.abi;
        order++;
    }
    qsort(namelist, order, sizeof(Stu), typeOfSort);
    cout << order << endl;
    for(int i = 0; i < order; i++)
    {
        cout << namelist[i].stuNum << " "
            << namelist[i].men << " "
            << namelist[i].abi << endl;
    }
    return 0;
}
int typeOfSort(const void * elem1, const void * elem2)
{
    const Stu* s1 = (const Stu*) elem1;
    const Stu* s2 = (const Stu*) elem2;
    if(s1->abi >= high && s1->men >= high && s2->abi >= high && s2->men >= high)
    {
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
    else if(s1->men >= high && s1->abi < high && s2->men >= high && s2->abi < high)
    {
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
    else if(s1->abi < high && s1->men < high && s2->abi < high && s2->men < high && s1->men > s1->abi && s2->men > s2->abi)
    {
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
    else if(s1->abi < high && s1->men < high && s2->abi < high && s2->men < high && s1->men > s1->abi && s2->men > s2->abi)
    {
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
}
