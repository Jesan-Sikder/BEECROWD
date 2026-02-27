#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main()
{

    int t, i, m, n, l;
    char a[10], b[10], x;

    cin >> t;
    for (i = 0; i < t; i++)
    {

        cin >> a;

        if ((a[0] == 'o' && a[1] == 'n') || (a[1] == 'n' && a[2] == 'e') || (a[0] == 'o' && a[2] == 'e'))
        {
            cout << "1" << endl;
        }

        else if ((strlen(a) == 5) && (a[0] == 't' || a[1] == 'h' || a[2] == 'r' || a[3] == 'e' || a[4] == 'e'))
        {
            cout << "3" << endl;
        }
        else
        {
            cout << "2" << endl;
        }
    }

    return 0;
}