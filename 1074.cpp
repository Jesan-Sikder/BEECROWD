#include <stdio.h>

int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        if (n % 2 == 0 && n < 0)
        {
            printf("EVEN NEGATIVE\n");
        }

        else if (n < 1 && n > -1)
        {
            printf("NULL\n");
        }
        else if (n % 2 == 1 && n > 0)
        {
            printf("ODD POSITIVE\n");
        }
        else if (n % 2 == -1 && n < 0)
        {
            printf("ODD NEGATIVE\n");
        }
        else if (n % 2 == 0 && n > 0)
        {
            printf("EVEN POSITIVE\n");
        }
    }

    return 0;
}