#include <stdio.h>
#include <stdbool.h>
int main()
{
    int i, arr[7];
    int checknum;
    bool flag = false;
    for (i = 0; i < 7; i++)
    {
        printf("Enter element of array is %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("check the present number in array element : ");
    scanf("%d", &checknum);
    for (i = 0; i < 7; i++)
    {
        if (arr[i] == checknum)
        {
            flag = true;
            // printf("%d is present in the array %d", checknum, i);
            break;
        }
    }
    if (flag == false)
    {
        printf("%d is not present in the array %d", checknum, i);
    }
    else
    {
        printf("%d is  present in the array %d", checknum);
    }
    return 0;
}