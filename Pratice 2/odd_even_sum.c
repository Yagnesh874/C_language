#include <stdio.h>
int main()
{
    int i, sum = 0, sum1 = 0;
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        else
        {
            sum1 = sum1 + i;
        }
    }
    printf("%d\n", sum);
    printf("%d\n", sum1);
    return 0;
}