#include <stdio.h>
int main()
{
    int n;
    int nst = n;
    int nsp = 1;
    int i, j, k;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (i = 1; i <= 2 * n + 1; i++)
    {
        printf("%d", i);
    }
    printf("\n");
        int a = 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= nst; j++)
        {
            printf("%d", a);
            a++;
        }
        for (k = 1; k <= nsp; k++)
        {
            printf(" ");
            a++;
        }
        for (j = 1; j <= nst; j++)
        {
            printf("%d", a);
            a++;
        }
        nst-=1;
        nsp += 2;
        printf("\n");
    }
    return 0;
}