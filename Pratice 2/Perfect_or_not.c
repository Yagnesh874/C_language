#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
            sum = sum + i;
        }
    }
    if (n == sum)
    {
        printf("Perfect number\n ");
    }
    else
    {
        printf("This number is not perfect\n ");
    }
    return 0;
}