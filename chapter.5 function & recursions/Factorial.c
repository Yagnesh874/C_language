#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of n : ");
    scanf("%d", &n);
    int fact = 1;
    for (int i = 1; i <= 10; i++)
    {
        fact = fact * i;
    }
    printf("%d", fact);
    return 0;
}