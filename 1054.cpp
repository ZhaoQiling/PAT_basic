#include <iostream>
#include <string>
using namespace std;
string input[200];
double isRight(string& s);
int main()
{
    int nIn;
    cin >> nIn;
    for(int i = 0; i < nIn; i++)
    {
        cin >> input[i];
    }
    double sum = 0;
    int nNum = 0;
    for(int i = 0; i < nIn; i++)
    {
        if(isRight(input[i]) <= 1000)
        {
            sum += isRight(input[i]);
            nNum++;
        }
        else{
            cout << "ERROR: " << input[i] << " is not a legal number" << endl;
        }
    }
    if(nNum == 0)
        cout << "The average of 0 numbers is Undefined";
    else
        cout << "The average of " << nNum << " numbers is " << sum / nNum;
    return 0;
}
double isRight(string& s)
{
    bool isPoint = false;
    int start = 0;
    if(s[0] == '-')
        start = 1;
    for(int i = start; i < s.length(); i++)
    {
        if((s[i] < '0' || s[i] > '9') && s[i] != '.')
            return 9999;
        if(s[i] == '.' && isPoint == false)
        {
            isPoint = true;
            continue;
        }
        if(s[i] == '.' && isPoint == true)
        {
            return 9999;
        }
    }

}
