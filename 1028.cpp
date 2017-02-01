#include <iostream>
#include <algorithm>
using namespace std;
struct Peo{
    char name[6];
    int year;
    int moon;
    int day;
};
Peo p[100500];
int cmp(const void *, const void *);//注意first last变量和 cmp函数的使用， 十分巧妙
int main()
{
    char useless;
    int nPeo;
    cin >> nPeo;
    int order = 0;
    Peo first = {"first", 2014, 9, 6}, last = {"last", 1814, 9, 6};
    for(int i = 1; i <= nPeo; i++)
    {
        Peo pr;
        cin >> pr.name >>
        pr.year >> useless >>
        pr.moon >> useless >>
        pr.day;
        if(cmp(&pr, &first) > 0 || cmp(&pr, &last) < 0)
            continue;
        p[order] = pr;
        order++;
    }
    if(order == 0)
    {
        cout << 0;
        return 0;
    }
    if(order == 1)
    {
        cout << 1 << " "<< p[0].name << " " << p[0].name;
        return 0;
    }
    qsort(p, order, sizeof(Peo), cmp);
    /*cout << endl;
    for(int i = 0; i < order; i++)
    {
        cout << p[i].name <<
        " " << p[i].year <<
        " " << p[i].moon <<
        " " << p[i].day << endl;
    }*/
    cout << order << " " << p[0].name << " " << p[order - 1].name;
    return 0;
}
int cmp(const void * elem1, const void * elem2)
{
    Peo * a = (Peo * )elem1;
    Peo * b = (Peo * )elem2;
    if(a->year != b->year){
        return a->year - b->year;
    }
    else if(a->moon != b->moon){
        return a->moon - b->moon;
    }
    else{
        return a->day - b->day;
    }
}
