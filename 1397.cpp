#include <bits/stdc++.h>
using namespace std;

int main()
{

    int c;

    while (cin >> c && c != 0)
    {
        int a, b, x = 0, y = 0;
        while (c--)
        {
            cin >> a >> b;
            if (a > b)
            {
                x++;
            }
            if (a < b)
            {
                y++;
            }
        }

        cout << x << " " << y << endl;
    }

    return 0;
}