#include <stdio.h>
int main()
{
    int arr[7];
    int sumeven = 0;
    int sumodd = 0;
    int ans = 0;
    for (int i = 0; i <= 6; i++)
    {
        printf("Enter element of array is %d : ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= 6; i++)
    {
        if (i % 2 == 0)
        {
            sumeven = sumeven + arr[i];
        }
        else
        {
            sumodd = sumodd + arr[i];
        }
    }
    printf("%d\n", sumeven);
    printf("%d\n", sumodd);
    ans = sumeven - sumodd;
    printf("%d\n", ans);
    return 0;
}