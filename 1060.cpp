#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool cmp(int a, int b)
{
    return a > b;
}
int main()
{
    int nDay;
    cin >> nDay;
    vector<int> arr(nDay + 1);
    for(int i = 1; i <= nDay; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin() + 1, arr.end(), cmp);
    int e = 0;
    int day = 1;
    while(day <= nDay && arr[day] > day)
    {
        day++;
        e++;
    }
    cout << e;
    return 0;
}
