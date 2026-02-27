#include <bits\stdc++.h>
#include<iostream>
using namespace std;
void jesan(int a, int b, int c, int d)
{
    // int hour;
    // if (a > c)
    // {
    //     hour = a - c;
    // }
    // else if (a < c)
    // {
    //      hour = c - a;
    // }
    // int min;
    // if (b > d)
    // {
    //     min = b - d;
    // }
    // else if (b < d)
    // {
    //     min = d - b;
    // }
}
int main()
{

    int hour, min;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == b && b == c && c == d)
    {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    }
    else
    {
        // jesan(a,b,c,d);
        int hour;
        if (a > c)
        {
            hour = a - c;
        }
        else if (a < c)
        {
            hour = c - a;
        }
        int min;
        if (b > d)
        {
            min = b - d;
        }
        else if (b < d)
        {
            min = d - b;
        }

        if (hour == 1)
        {
            hour = 60;
            cout << "O JOGO DUROU " << hour - min << " HORA(S) E 0 MINUTO(S)" << endl;
        }
        else
        {

            cout << "O JOGO DUROU " << hour << " HORA(S) E " << min << " MINUTO(S)" << endl;
        }
    }
    return 0;
}
// O JOGO DUROU 2 HORA(S) E 2 MINUTO(S)