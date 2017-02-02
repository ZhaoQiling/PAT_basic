#include <iostream>
#include <algorithm>
using namespace std;
int arr[10050];
int graph[10000][10000];
int cmp(const void *, const void *);
int main()
{
    int nNum;
    cin >> nNum;
    for(int i = 0; i < nNum; i++)
    {
        cin >> arr[i];
    }
    qsort(arr, nNum, sizeof(int), cmp);
    int nRow, nCol;
    for(int i = 1; i <= nNum; i++)
    {
        if(nNum % i) continue;
        if(i < nNum / i) continue;
        nRow = i;
        nCol = nNum / i;
        break;
    }
    int status = 0;
    //0 向右 1 向下 2 向左 3 向上
    int up = 0;
    int down = nRow - 1;
    int left = -1;
    int right = nCol - 1;
    int x = 0;
    int y = -1;
    for(int i = 0; i < nNum; i++)
    {
        if(status == 0)
        {
            y++;
            if(y == right)
            {
                status = 1;
                left++;
            }
        }
        else if(status == 1)
        {
            x++;
            if(x == down)
            {
                status = 2;
                up++;
            }
        }
        else if(status == 2)
        {
            y--;
            if(y == left)
            {
                status = 3;
                right--;
            }
        }
        else{
            x--;
            if(x == up)
            {
                status = 0;
                down--;
            }
        }
        graph[x][y] = arr[i];
    }
    for(int i = 0; i < nRow; i++)
    {
        for(int j = 0; j < nCol; j++)
        {
            cout << graph[i][j];
            if(j != nCol - 1)
                cout << " ";
        }
        if(i != nRow - 1)
            cout << endl;
    }

    return 0;
}
int cmp(const void * elem1, const void * elem2)
{
    const int * pa = (const int *) elem1;
    const int * pb = (const int *) elem2;
    return *pb - *pa;
}
