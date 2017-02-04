#include <iostream>
using namespace std;
int main()
{
    int nNum;
    cin >> nNum;
    int arr[15];
    for(int i = 1; i <= nNum; i++)
        cin >> arr[i];
    int sum = 0;
    for(int i = 1; i <= nNum; i++)
    {
        int val = 0;
        for(int j = 1; j <= nNum; j++)
        {
            if(i == j) continue;
            val = arr[i] * 10 + arr[j];
            sum += val;
        }
    }
    cout << sum;
    return 0;
}
