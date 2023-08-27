#include <stdio.h>
int main()
{
    int makrs[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter elemnt %d : ", i);
        scanf("%d", &makrs[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (makrs[i] <= 34)
        {
            printf("%d ", i);
        }
    }
    return 0;
}