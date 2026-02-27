// LIFE IS NOT A PROBLEM TO BE SOLVED
#include <stdio.h>
int main()
{
    int x, i;
    char arr[50] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");

    return 0;
}