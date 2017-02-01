 #include <iostream>
 #include <stdio.h>
 #include <math.h>
 using namespace std;
 void simpOut(long long sub, long long super);
 long long gcd(long long sub, long long super);
 void sum(long long, long long, long long, long long);
 void minu(long long, long long, long long, long long);
 void mul(long long, long long, long long, long long);
 void div(long long, long long, long long, long long);
 int main()
 {
    long long sub1, super1;
    long long sub2, super2;
    char useless;
    cin >> sub1 >> useless >> super1 >> sub2 >> useless >> super2;
    sum(sub1, super1, sub2, super2); cout << endl;
    minu(sub1, super1, sub2, super2); cout << endl;
    mul(sub1, super1, sub2, super2); cout << endl;
    div(sub1, super1, sub2, super2);
    return 0;
 }
void simpOut(long long sub, long long super)
{
    bool isF = false;
    if(sub == 0)
    {
        cout << 0;
        return;
    }
    if(sub < 0)
    {
        cout << "(-";
        isF = true;
        sub *= -1;
    }
    long long r = gcd(sub, super);
    sub /= r;
    super /=r;
    if(sub > super)
    {
        if(super == 1)
        {
            cout << sub;
        }
        else
        {
            cout << sub / super << " ";
            sub %= super;
            cout << sub << "/" << super;
        }
    }
    else if(sub == super)
        cout << 1;
    else{
        cout << sub << "/" << super;
    }
    if(isF) cout << ")";

}
long long gcd(long long sub, long long super)
{
    while(true)
    {
        long long r = sub % super;
        sub = super;
        super = r;
        if(r == 0)
            break;
    }
    return sub;
}
void sum(long long sub1, long long super1, long long sub2, long long super2)
{
    simpOut(sub1, super1);
    cout << " + ";
    simpOut(sub2, super2);
    cout << " = ";
    simpOut(sub1 * super2 + sub2 * super1, super1 * super2);
}
void minu(long long sub1, long long super1, long long sub2, long long super2)
{
    simpOut(sub1, super1);
    cout << " - ";
    simpOut(sub2, super2);
    cout << " = ";
    simpOut(sub1 * super2 - sub2 * super1, super1 * super2);
}
void mul(long long sub1, long long super1, long long sub2, long long super2)
{
    simpOut(sub1, super1);
    cout << " * ";
    simpOut(sub2, super2);
    cout << " = ";
    simpOut(sub1 * sub2, super1 * super2);
}
void div(long long sub1, long long super1, long long sub2, long long super2)
{
    simpOut(sub1, super1);
    cout << " / ";
    simpOut(sub2, super2);
    cout << " = ";
    if(sub2 == 0)
    {
        cout << "Inf";
        return ;
    }
    long long a = sub1 * super2;
    long long b = sub2 * super1;
    if(b < 0)
    {
        a *= -1;
        b *= -1;
    }
    simpOut(a, b);
}
