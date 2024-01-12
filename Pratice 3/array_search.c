#include <stdio.h>
int main()
{
    int n;
    int arr[50];
    int search;
    int flag;
    printf("Enter a number  : ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        printf("Enter element of array is %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter search element : ");
    scanf("%d", &search);
    for (int i = 0; i <= n; i++)
    {
        if (search == arr[i])
        {
            flag = 1;
            printf("The index is %d\n", i);
            break;
        }
    }
    for (int i = 0; i <= n; i++)
    {
        printf("%d\t", arr[i]);
    }
    if (flag == 1)
    {
        printf("\nEnter value found in array element ");
    }
    else
    {
        printf("\nEnter value not found in array element ");
    }
    return 0;
}