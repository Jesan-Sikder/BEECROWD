#include <bits/stdc++.h>
using namespace std;

int hacked(int a, int b)
{
    int result;
    if (a > b) result = a % b;
    else result = b % a;
    return result;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int result = hacked(a, b);
    cout << result << endl;
    return 0;
}
