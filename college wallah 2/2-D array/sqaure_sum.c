#include <stdio.h>
#define r 4
#define c 5
int main()
{
    int arr[r][c];
    int sum = 0;
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter element of (%d, %d) : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i <= 2; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    printf("%d", sum);
    return 0;
}