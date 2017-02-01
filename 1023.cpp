#include <iostream>
#include <algorithm>
using namespace std;
int cmp(const void * elem1, const void * elem2)
{
    const int * a = (const int *) elem1;
    const int * b = (const int *) elem2;
    return (*a) - (*b);
}
int main()
{
    string s;
    int val;
    for(int i = 0; i <= 9; i++)
    {
        cin >> val;
        for(int j = 0; j < val; j++)
        {
            s = s + char(i + '0');
        }
    }
    //qsort(&s[0], s.length(), sizeof(s[0]), cmp);
    //cout << s;
    if(s[0] != '0')
    {
        cout << s;
    }
    else{
        char c;
        for(int i = 1; i < s.length(); i++)
        {
            if(s[i] != '0')
            {
                c = s[i];
                s[i] = s[0];
                s[0] = c;
                break;
            }
        }
        cout << s;
    }
    return 0;

}
