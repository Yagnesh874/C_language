#include <stdio.h>
int main()
{
    int arr[7];
    int brr[7];
    for (int i = 0; i <= 6; i++)
    {
        printf("Enter element of array is %d : ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= 6; i++)
    {
        brr[i] = arr[6 - i];    

        printf("%d ", brr[i]);
    }
    return 0;
}