#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
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
    if(nNum <= 0)
        printf("The average of 0 numbers is Undefined\n");
    else if(nNum == 1)
        printf("The average of 1 number is %.2f\n", sum / nNum);
    else
        printf("The average of %d numbers is %.2f\n", nNum, sum / nNum);
    //system("pause");
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
    if(s[0] == '.') return 9999;
    if(s[0] == '-' && s[1] == '.') return 9999;
    int beforePoint = 0;
    double afterPoint = 0;
    int loc = start;
    for(; loc < s.length(); loc++)
    {
        if(s[loc] == '.')
            break;
        beforePoint = beforePoint * 10 + (s[loc] - '0');
    }
    loc++;
    int sum = 0;
    for(int i = loc; i <= s.length() - 1; i++)
    {
        sum++;
    }
    if(sum > 2) return 9999;
    for(int i = s.length() - 1; i >= loc; i--)
    {
        afterPoint = afterPoint * 0.1 + (s[i] - '0');
    }
    afterPoint *= 0.1;
    //cout << start << " " << loc <<endl;
    //if(beforePoint == 0 && s[start] == '0' && s[start + 1] == '0')
    //    return 9999;
    //if(beforePoint != 0 && s[start] == '0' && start + 1 != loc)
    //{
    //    return 9999;
    //}
    double ans = beforePoint + afterPoint;
    if(ans > 1000) return 9999;
    //if(s[s.length() - 1] == '.') return 9999;
    if(start == 1) ans *= -1;
    //cout << ans << endl;
    return ans;
}
