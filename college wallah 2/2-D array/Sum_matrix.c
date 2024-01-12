#include <stdio.h>
#define rows 3
#define cols 3
int main()
{
    int arr[rows][cols];
    int sum = 0;
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Enter element (%d , %d) : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
           sum= sum+arr[i][j];
        }
    printf("%d", sum);
    }
    return 0;
}