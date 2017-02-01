#include <iostream>
using namespace std;
int main()
{
    int siz, range;
    int arr[150];
    cin >> siz >> range;
    for(int i = 0; i < siz; i++)
        cin >> arr[i];
    int p = 0;
    for(int i = 1; i <= range; i++)
    {
        if(p == 0)
            p = siz -1;
        else{
            p--;
        }
    }
    for(int i = 1; i <= siz; i++)
    {
        cout << arr[p];
        if(p == siz - 1)
            p = 0;
        else
            p++;
        if(i != siz)
            cout << " ";
    }
    return 0;
}
