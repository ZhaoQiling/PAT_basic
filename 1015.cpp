//#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <malloc.h>
using namespace std;
int cmp(const void *, const void *);
struct Student{
    int type;
    // 0 1 2 3 4
    int id;
    int ment;
    int abi;
};
int highLevel, lowLevel;
Student * namelist;
int main()
{
    int nStu;
    scanf("%d", &nStu);
    //cin >> nStu;
    namelist =(Student *)malloc(nStu * sizeof(Student));
    scanf("%d%d", &lowLevel, &highLevel);
    //cin >> lowLevel >> highLevel;
    int nAns = 0;
    for(int i = 0; i < nStu; i++)
    {
        scanf("%d%d%d", &namelist[i].id, &namelist[i].ment, &namelist[i].abi );
        //cin >> namelist[i].id >> namelist[i].ment >> namelist[i].abi;
        if(namelist[i].ment >= highLevel && namelist[i].abi >= highLevel)
            namelist[i].type = 0;
        else if(namelist[i].ment >= highLevel && namelist[i].abi < highLevel && namelist[i].abi >= lowLevel)
            namelist[i].type = 1;
        else if(namelist[i].ment >= lowLevel && namelist[i].ment < highLevel
                && namelist[i].abi >= lowLevel && namelist[i].abi < highLevel
                && namelist[i].ment >= namelist[i].abi)
            namelist[i].type = 2;
        else if(namelist[i].ment >= lowLevel && namelist[i].abi >= lowLevel && namelist[i].ment < namelist[i].abi)
            namelist[i].type = 3;
        else
        {
            namelist[i].type = 4;
            continue;
        }
        nAns++;
    }
    qsort(namelist, nStu, sizeof(Student), cmp);
    printf("%d\n", nAns);
    //cout << nAns << endl;
    for(int i = 0; i < nAns; i++)
    {
        printf("%d %d %d\n", namelist[i].id, namelist[i].ment, namelist[i].abi);
        //cout << namelist[i].id << " " << namelist[i].ment << " " << namelist[i].abi << endl;
    }
    return 0;
}
int cmp(const void * elem1, const void * elem2)
{
    const Student * a = (const Student *) elem1;
    const Student * b = (const Student *) elem2;
    if(a->type != b->type)
        return a->type - b->type;
    if(a->ment + a->abi != b->ment + b->abi)
        return b->ment + b->abi - a->ment - a->abi;
    if(a->ment != b->ment)
        return b->ment - a->ment;
    return a->id - b->id;
}
