#include <stdio.h>
int main()
{
    int arr[7];
    for (int i = 0; i <= 6; i++)
    {
        printf("Enter the element of array is %d : ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= 6; i++)
    {
        if (i % 2 != 0)
        {
            arr[i] = arr[i] * 2;
        }
        else
        {
            arr[i] = arr[i] + 10;
        }
        printf("%d ", arr[i]);
    }
    return 0;
}