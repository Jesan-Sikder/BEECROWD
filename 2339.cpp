#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a * c <= b)
        cout << "S";
    else
        cout << "N";
    return 0;
}