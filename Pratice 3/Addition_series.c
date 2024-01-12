#include <stdio.h>
int main()
{
    int pow = 1, x, n;
    float sum = 0.0;
    printf("Enter number : ");
    scanf("%d", &x);
    printf("Enter power of a number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
            pow = 1;
        for (int j = 1; j <= i; j++)
        {
            pow = pow * x;
        }

        sum = sum + (1.0 / pow);
    }
    printf("%f", sum);
    return 0;
}