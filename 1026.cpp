#include <iostream>
using namespace std;
int main()
{
    int hour, mins;
    int sec;
    float sec1;
    int start, end;
    cin >> start >> end;
    sec1 = float(end - start) / 100;
    if(sec1 -(int)sec1 >= 0.5)
        sec = int(sec1) + 1;
    else
        sec = int(sec1);
    mins = sec / 60;
    sec = sec % 60;
    hour = mins / 60;
    mins = mins % 60;

    if(hour < 10)
        cout << "0";
    cout << hour;
    cout << ":";

    if(mins < 10)
        cout << "0";
    cout << mins;
    cout << ":";

    if(sec < 10)
        cout << "0";
    cout << sec;
    return 0;
}
