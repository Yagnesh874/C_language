#include <stdio.h>
int main()
{
    int arr[8];
    int x = 12;
    for (int i = 0; i <= 7; i++)
    {
        printf("Enter element of array is %d : ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= 7; i++)
    {
        for (int j = i + 1; j <= 7; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                printf("(%d ,%d)", arr[i], arr[j]);
            }
        }
    }
    return 0;
}