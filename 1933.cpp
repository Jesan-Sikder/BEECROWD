#include <stdio.h>
// int do_math(int a, int b)
// {
//     if (a > b)
//     {
//         printf("%d\n", a);
//     }
//     else
//     {
//         printf("%d\n", b);
//     }
// }
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    // do_math(a, b);
     if (a > b || a==b)
    {
        printf("%d\n", a);
    }
    else
    {
        printf("%d\n", b);
    }
    return 0;
}