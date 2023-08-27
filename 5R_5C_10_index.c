#include <stdio.h>
#define ROWS 5
#define COLS 5
int main()
{
    int arr[ROWS][COLS];
    int i, j;
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("Enter element of array is (%d,%d) : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}