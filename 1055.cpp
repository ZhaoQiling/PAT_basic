#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct Peo{
    string name;
    int high;
};
bool cmp(Peo a, Peo b);
int main()
{
    int nPeo, row;
    cin >> nPeo >> row;
    vector<Peo> arr(nPeo);
    for(int i = 0; i < nPeo; i++)
    {
        cin >> arr[i].name >> arr[i].high;
    }
    sort(arr.begin(), arr.end(), cmp);
    int col = nPeo / row;
    int finalCol = nPeo / row + nPeo % row;
    int loc = 1;
    string ans;
    for(int i = 0; i < finalCol; i++)
    {
        if(i == 0)
        {
            ans = arr[0].name;
            continue;
        }
        if(i % 2 == 0)
            ans = ans + " " + arr[loc].name;
        if(i % 2 == 1)
            ans = arr[loc].name + " " + ans;
        loc++;
    }
    cout << ans << endl;
    for(int i = 0; i < row - 1; i++)
    {
        ans = "";
        for(int j = 0; j < col; j++)
        {
            if(j == 0)
            {
                ans = arr[loc].name;
                loc++;
                continue;
            }
            if(j % 2 == 1)
                ans = arr[loc].name + " " + ans;
            if(j % 2 == 0)
                ans = ans + " " + arr[loc].name;
            loc++;
        }
        cout << ans << endl;
    }
//    for(int i = 0; i < nPeo; i++)
//    {
//        cout << arr[i].name << " " << arr[i].high << endl;
//    }
    return 0;
}
bool cmp(Peo a, Peo b)
{
    if(a.high != b.high)
        return a.high > b.high;
    return a.name < b.name;
}
