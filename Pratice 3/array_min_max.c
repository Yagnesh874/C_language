#include <stdio.h>
int main()
{
    int a[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter element of array is %d : ", i + 1);
        scanf("%d", &a[i]);
    }
    int max = a[0];
    for (i = 1; i < 5; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("The maximum number is : %d\n", max);
    int min = a[0];
    for (i = 1; i < 5; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("The minimum number is : %d\n", min);
    return 0;
}