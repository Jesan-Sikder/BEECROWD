#include <stdio.h>
int main()
{
    int a, b;
    int sum1 = 0;
    int sum2 = 0;

    scanf("%d %d", &a, &b);
    if (a < b)
    {
        for (int i = (a + 1); i < b; i++)
        {
            if (i % 2 != 0)
            {
                // printf("%d\n", i);
                sum1 += i;
            }
        }
        printf("%d\n", sum1);
    }
    else if (a > b)
    {
        for (int i = (a - 1); i > b; i--)
        {
            if (i % 2 != 0)
            {
                // printf("%d\n", i);
                sum2 += i;
            }
        }
        printf("%d\n", sum2);
    }
    else if(a=b){
        printf("%d\n",a-b);
    }
    return 0;
}