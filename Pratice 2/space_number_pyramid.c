#include <stdio.h>
int main()
{
    int i, j, n, k;
    printf("Enter a number : ");
    scanf("%d", &n);
    int a = 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= a; k++)
        {
            printf("%d", k);
        }
        a = a + 2;
        printf("\n");
    }
    return 0;
}