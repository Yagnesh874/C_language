#include <stdio.h>
int main()
{
    int sum = 0, arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the element of array is %d : ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
    }
    printf("The sum is %d", sum);
    return 0;
}