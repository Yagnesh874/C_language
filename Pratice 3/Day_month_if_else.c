#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12)
    {
        printf("In this month 31 days");
    }
    else
    {
        printf("In this month 30 days");
    }
    return 0;
}