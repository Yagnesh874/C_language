#include <stdio.h>
int main()
{
    int n, i;
    int sum = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        printf("perfect number");
    }
    else
    {

        printf("not perfect number");
    }
    return 0;
}