#include <stdio.h>
int main()
{
    int product = 1, arr[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter the element of array is %d : ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= 4; i++)
    {
        product = product * arr[i];
        printf("%d\n", product);
    }
    return 0;
}