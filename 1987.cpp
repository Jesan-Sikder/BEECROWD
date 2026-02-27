#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main()
{
    int x;
    string y;
    while (cin >> x >> y)
    {
        int sum = 0;
        for (int i = 0; i < y.size(); i++)
        {
            sum += y[i] - '0';
        }
        // cout << sum << endl;
        if (sum % 3 == 0)
        {
            cout << sum << " sim" << endl;
        }
        else
        {
            cout << sum << " nao" << endl;
        }
    }
}
