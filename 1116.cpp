#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    float a, b;
    for (int i = 0; i < N; i++)
    {
        scanf("%f %f", &a, &b);
        if (b == 0)
        {
            printf("divisao impossivel\n");
        }
        else{
        printf("%.1f\n", a / b);
        }
    }

    return 0;
}