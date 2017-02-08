#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int nNum;
    cin >> nNum;
    vector<int> arr(nNum);
    vector<int> big(nNum);
    int max = 0;
    for(int i = 0; i < nNum; i++)
    {
        cin >> arr[i];
        big[i] = max;
        if(arr[i] > max)
            max = arr[i];
    }
    int small = 1000000050;
    vector<int> ans;
    for(int i = nNum - 1; i >= 0; i--)
    {
        if(arr[i] > big[i] && arr[i] < small)
            ans.push_back(arr[i]);
        if(arr[i] < small)
            small = arr[i];
    }
    int size = ans.size();
    cout << size << endl;
    if(size - 1 >= 0)
    {
        cout << ans[size - 1];
    }
    for(int i = size - 2; i >= 0; --i)
    {
        cout << " " << ans[i];
    }
    cout << endl;
    return 0;
}
