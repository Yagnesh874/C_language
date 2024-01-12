#include <stdio.h>
int main()
{
    int temp = 0, sum = 0, fact, rem = 0, n, digit = 3;
    printf("Enter a number : ");
    scanf("%d", &n);
    temp = n;
    for (int i = 1; i <= digit; i++)
    {
        rem = n % 10;
        n = n / 10;
        fact = 1;
        for (int j = 1; j <= rem; j++)
        {
            fact = fact * j;
        }
        sum = sum + fact;
        // printf("%d",sum);
    }
    if (temp == sum)
    {
        printf("strong number ");
    }
    else
    {
        printf("not strong number");
    }
    return 0;
}