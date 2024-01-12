#include <stdio.h>

int prime(int a, int n)
{
    int i;
    n = a;
    for (i = 2; i < n; i++)
    {
        if (a % i == 0)
        {
            return 1;
            break;
        }
    }
    return 0;
}
int main()
{
    int n1;
    int n;
    int num;
    printf("Enter a number : ");
    scanf("%d", &n1);

    num = prime(n1, n);
    if (num == 0)
    {
        printf(" prime number");
    }
    else
    {
        printf("not prime number");
    }
    return 0;
}