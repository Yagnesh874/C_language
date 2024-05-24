#include <stdio.h>
int main()
{
    int n;
    int i;
    int count = 0;
    printf("Enter the number : ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter  Positive number");
    }

    if (n == 1)
    {
        printf("There is no prime number of 1");
    }

    for (int i = 1; i <= 5; i++)
    {
        if (n % i == 0)
        {
            count++;
            printf("%d",i);
        }
    }
    if (count <= 2)
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is not prime");
    }
    return 0;
}