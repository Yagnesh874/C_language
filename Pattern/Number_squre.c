#include <stdio.h>
int main()
{
    int n;
    printf("Enter the rows : ");
    scanf("%d", &n);
    int m;
    printf("Enter the column : ");
    scanf("%d", &m);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}