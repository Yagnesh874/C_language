#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the number 1 : ");
    scanf("%d", &a);
    printf("Enter the number 2 : ");
    scanf("%d", &b);
    printf("Enter the number 3 : ");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is maximum", a);
        }
        else
        {
            printf("%d is maximum", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d is maximum", b);
        }
        else
        {
            printf("%d is maximum", c);
        }
    }
    return 0;
}