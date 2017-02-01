#include <iostream>
using namespace std;
int main()
{
    int nCase;
    cin >> nCase;
    for(int i = 1; i <= nCase; i++)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        if(a + b > c)
            cout << "Case #" << i << ":" << " true" << endl;
        else
            cout << "Case #" << i << ":" << " false" << endl;
    }
}
