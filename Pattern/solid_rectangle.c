#include <stdio.h>
int main()
{
    int r;
    printf("Enter the rows : ");
    scanf("%d", &r);
    int c;
    printf("Enter the column : ");
    scanf("%d", &c);
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}