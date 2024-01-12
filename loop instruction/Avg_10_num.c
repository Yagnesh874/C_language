#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    float avg;
    for (i = 1; i <= 10; i++)
    {
        printf("Number-%d : ", i);
        scanf("%d", &n);
        sum = sum + n;
        avg = sum / 10;
    }
    printf("\n%d", sum);
    printf("\n%f", avg);
    return 0;
}
