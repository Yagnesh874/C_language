#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number  : ");
    scanf("%d", &n);
    int flag = 0;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0 || flag == 1)
    {
        printf("%d is prime number", n);
    }
    else
    {
        printf("%d is not prime number", n);
    }
    return 0;
}