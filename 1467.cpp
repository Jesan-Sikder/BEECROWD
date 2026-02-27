#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main()
{

    int a, b, c;
    while (cin >> a >> b >> c)
    {
        if (a == b && a != c && b != c)
        {
            cout << "C" << endl;
        }
        else if (a == b && b == c && c == a)
        {
            cout << "*" << endl;
        }
        else if (b == c && a != c && b != a)
        {
            cout << "A" << endl;
        }
        else if (a == c && b != c && b != a)
        {
            cout << "B" << endl;
        }
        else
        {
            cout << "*" << endl;
        }
    }
    return 0;
}