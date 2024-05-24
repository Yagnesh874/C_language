#include <stdio.h>

int prime_range(int n)
{

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int start;
    int end;

    printf("Enter start number : ");
    scanf("%d", &start);

    printf("Enter end number : ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
        if (prime_range(i))
        {
            printf("%d", i);
        }
        printf(" \a ");
    }
    return 0;
}