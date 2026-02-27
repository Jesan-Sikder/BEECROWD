#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a == 0)
    {
        cout << "E" << endl;
    }
    else if (a > 85 && a < 101)
    {
        cout << "A" << endl;
    }
    else if (a > 60 && a < 86)
    {
        cout << "B" << endl;
    }
    else if (a > 35 && a < 61)
    {
        cout << "C" << endl;
    }
    else if (a > 0 && a < 36)
    {
        cout << "D" << endl;
    }
    return 0;
}