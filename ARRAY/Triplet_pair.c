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
            for (int k = j + 1; k <= 7; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    printf("( %d , %d , %d)", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    return 0;
}