#include <stdio.h>
int main()
{
    int n, count, sum, sum3 = 0, sum1 = 0, sum2 = 0;
    char ch;
    float a, b, c;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {

        scanf("%d %c", &n, &ch);
        if ('C' == ch)
        {
            sum1 = sum1 + n;
        }
        if ('R' == ch)
        {
            sum2 = sum2 + n;
        }
        if ('S' == ch)
        {
            sum3 = sum3 + n;
        }
    }
    sum = sum1 + sum2 + sum3;
    a = (sum1 * 100.00) / sum;
    b = (sum2 * 100.00) / sum;
    c = (sum3 * 100.00) / sum;
    printf("Total: %d cobaias\n", sum);
    printf("Total de coelhos: %d\n", sum1);
    printf("Total de ratos: %d\n", sum2);
    printf("Total de sapos: %d\n", sum3);
    printf("Percentual de coelhos: %.2f %%\n", a);
    printf("Percentual de ratos: %.2f %%\n", b);
    printf("Percentual de sapos: %.2f %%\n", c);
    return 0;
}