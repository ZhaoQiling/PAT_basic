#include <iostream>
using namespace std;
int main()
{
    int mat[1000];
    int input;
    cin >> input;
    char c;
    cin >> c;
    if(input < 7)
    {
        cout << c << endl;
        cout << input - 1;
        return 0;
    }
    input -= 1;
    int row;
    for(row = 2; (2 * row -1) * 2 <= input; row++)
    {
        mat[row] = 2 * row - 1;
        input -= 2 * (2 * row -1);
    }
    row--;
    for(int i = row; i >= 2; i--)
    {
        for(int k = 0; k < row - i; k++) cout << " ";
        for(int j = 1; j <= mat[i]; j++)
        {
            cout << c;
        }
        cout << endl;
    }
    for(int k = 1; k < row; k++) cout << " ";
    cout << c << endl;

    for(int i = 2; i <= row; i++)
    {
        for(int k = 0; k < row - i; k++) cout << " ";
        for(int j = 1; j <= mat[i]; j++)
        {
            cout << c;
        }
        cout << endl;
    }
    if(input != 0)cout << input;
    return 0;
}
