#include <iostream>
using namespace std;
void allToK(int& G, int& S, int& K);
void gene(int& G, int& S, int& K);
int main()
{
    int pG, pS, pK;
    char useless;
    cin >> pG >> useless >> pS >> useless >> pK;
    int aG, aS, aK;
    cin >> aG >> useless >> aS >> useless >> aK;
    allToK(pG, pS, pK);
    allToK(aG, aS, aK);
    int ansG, ansS, ansK;
    ansK = aK - pK;
    if(ansK < 0)
    {
        cout << "-";
        ansK *= -1;
    }
    gene(ansG, ansS, ansK);
    cout << ansG << "." << ansS << "." << ansK;
}
void allToK(int& G, int& S, int& K)
{
    S += G * 17;
    G = 0;
    K += 29 * S;
    S = 0;
}
void gene(int& G, int& S, int& K)
{
    G = 0; S =0;
    S += K / 29;
    K %= 29;
    G += S / 17;
    S %=17;
}
