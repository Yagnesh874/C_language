#include <stdio.h>
int main()
{
    int arr[7];
    for (int i = 0; i < 7; i++)
    {
        printf("Enter element of array is %d : ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 7; i++)
    {
        int flag = 0;
        for (int j = i + 1; j < 7; j++)
        {
            if (arr[i] == arr[j])
                flag = 1;
        }
        if (flag == 0)
        {
            printf("%d", arr[i]);
            break;
        }
    }
    return 0;
}