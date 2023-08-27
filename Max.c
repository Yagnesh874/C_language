#include <stdio.h>
int main()
{
    int arr[5];
    int max = -1;
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter element of array is %d : ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= 4; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d\n", max);

    return 0;
}