#include <stdio.h>
int main()
{
    int arm = 0, rem = 0, n, i;
    printf("Enter a number : ");
    scanf("%d", &n);
    i = n;
    while (i > 0)
    {
        rem = i % 10;
        arm=(rem*rem*rem)+arm;
        i = i / 10;
    }
    if (arm == n)
    {
        printf("armstrong number ");
    }
    else
    {
        printf("not armstorng number");
    }
    return 0;
}