#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, gunfol = 1, sum = 0;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        gunfol = a * b;
        sum += gunfol;
    }

    cout << sum<<endl;
    return 0;
}