#include <iostream>
#include <string>
using namespace std;
int countFunction(string &);
void outFunc(string&, int);
int main()
{
    string hand;
    string eye;
    string mouth;
    getline(cin, hand); cin.clear();
    getline(cin, eye); cin.clear();
    getline(cin, mouth); cin.clear();
//ŝ    cout << hand << "(((("<< eye << "(((("<< mouth;
    int nHand = countFunction(hand);
    int nEye = countFunction(eye);
    int nMouth = countFunction(mouth);
    int nRequst;
    cin >> nRequst;
    int leftHand, leftEye, theMouth, rightEye, rightHand;
    for(int m = 0; m < nRequst; m++)
    {
        cin >> leftHand >> leftEye >> theMouth >> rightEye >> rightHand;
        if(leftHand > nHand || rightHand > nHand || theMouth > nMouth || rightEye > nEye || leftEye > nEye)
        {
            cout << "Are you kidding me? @\\/@" << endl;
            continue;
        }
        if(leftHand < 1 || rightHand < 1 || theMouth < 1 || rightEye < 1 || leftEye < 1)
        {
            cout << "Are you kidding me? @\\/@" << endl;
            continue;
        }
        outFunc(hand, leftHand);
        cout << "(";
        outFunc(eye, leftEye);
        outFunc(mouth, theMouth);
        outFunc(eye, rightEye);
        cout << ")";
        outFunc(hand, rightHand);
        cout << endl;
    }
    return 0;
}
int countFunction(string & s)
{
    int ans = 0;
    for(int i = 0; i < s.length(); i++)
        if(s[i] == '[')
            ans++;
    return ans;
}
void outFunc(string& s, int order)
{
    int loc = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '[') loc++;
        if(loc == order)
        {
            for(int j = i + 1; s[j] != ']'; j++)
            {
                cout << s[j];
            }
            return;
        }
    }
}
