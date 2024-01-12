#include <stdio.h>
int main()
{
    int arr[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter element of array is %d : ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}