#include <stdio.h>
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    int arm = 0;
    int r = 0;
    int sum = 0;
    int temp = n;
    while (n > 0)
    {
        r = n % 10;
        arm = arm + (r * r * r);
        sum = arm;
        n = n / 10;
    }
    if (sum == temp)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not armstrong number");
    }
    return 0;
}