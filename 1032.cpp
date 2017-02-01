#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int * arr = (int *) malloc( (n + 100) * sizeof(int) );
    int school, score;
    int nS = 0;
    int maxSch;
    int maxSco = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> school >> score;
        if(arr[school] == 0)
            nS++;
        arr[school] += score;
        if(arr[school] > maxSco)
        {
            maxSco = arr[school];
            maxSch = school;
        }
    }
    cout << maxSch << " " << maxSco;
    return 0;
}
