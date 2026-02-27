#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a < b)
    {
        for (int i = (a + 1); i < b; i++)
        {
            if (i % 5 == 2 || i % 5 == 3)
            {
                printf("%d\n", i);
            }
        }
    }
    else if (a > b)
    {
        for (int i = (b + 1); i < a; i++)
        {
            if (i % 5 == 2 || i % 5 == 3)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}
