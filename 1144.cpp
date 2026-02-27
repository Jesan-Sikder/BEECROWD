#include <bits/stdc++.h>
using namespace std;
#define hacked_done return 0;
int main()
{

    int i, a;
    cin >> a;
    for (i = 1; i <= a; i++)
    {
        int j = i * i;
        int k = i * j;
        cout << i << " " << j << " " << k << endl
             << i << " " << j + 1 << " " << k + 1 << endl;
    }
    hacked_done;
}