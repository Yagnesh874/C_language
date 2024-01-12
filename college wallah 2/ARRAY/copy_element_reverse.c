#include <stdio.h>
int main()
{
    int arr[5];
    int brr[5];
    for (int i = 0; i < 5; i++)
    {
       printf("Enter element of array is %d : ", i + 1);
        scanf("%d", &arr[i]);
    } 
    for (int i = 4; i >= 0; i--)
    {
        brr[i] = arr[i];
    }
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", brr[i]);
    }
    return 0;
}