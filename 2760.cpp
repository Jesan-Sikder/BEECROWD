#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char a[150], b[150], c[150], x;

    scanf("%[^\n]s", a);
    scanf("%c", &x);
    scanf("%[^\n]s", b);
    scanf("%c", &x);
    scanf("%[^\n]s", c);

    printf("%s%s%s\n", a, b, c);
    printf("%s%s%s\n", b, c, a);
    printf("%s%s%s\n", c, a, b);

    i = 0;

    while (a[i] != '\0' && i < 10)
    {
        printf("%c", a[i]);
        i++;
    }

    i = 0;

    while (b[i] != '\0' && i < 10)
    {
        printf("%c", b[i]);
        i++;
    }

    i = 0;

    while (c[i] != '\0' && i < 10)
    {
        printf("%c", c[i]);
        i++;
    }

    printf("\n");

    return 0;
}