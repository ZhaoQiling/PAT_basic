#include <iostream>
#include <stdio.h>
using namespace std;
int count[6];
//P A T e s t
int main()
{
    char c;
    int nC = 0;
    while(cin >> c)
    {
        switch(c)
        {
        case 'P': count[0]++; nC++; break;
        case 'A': count[1]++; nC++; break;
        case 'T': count[2]++; nC++; break;
        case 'e': count[3]++; nC++; break;
        case 's': count[4]++; nC++; break;
        case 't': count[5]++; nC++; break;
        }
    }
 //   cout << nC << endl;
    int nOut = 0;
    for(int i = 0;; i++)
    {
        if(nOut == nC) break;
        int loc = i % 6;
 //       cout << " " << i;
        if(count[loc] != 0)
        {
            switch(loc)
            {
            case 0: cout << "P"; nOut++; count[loc]--; break;
            case 1: cout << "A"; nOut++; count[loc]--; break;
            case 2: cout << "T"; nOut++; count[loc]--; break;
            case 3: cout << "e"; nOut++; count[loc]--; break;
            case 4: cout << "s"; nOut++; count[loc]--; break;
            case 5: cout << "t"; nOut++; count[loc]--; break;
            }
        }
    }
    return 0;
}
