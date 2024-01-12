#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a number 1 : ");
    scanf("%d", &a);
    printf("Enter a number 2 : ");
    scanf("%d", &b);
    printf("Enter a number 3 : ");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d", a);
        }
        else
        {

            printf("%d", c);
        }
    }
    else
    {
        if (b > a)
        {
            if (b > c)
            {
                printf("%d", b);
            }
            else
            {
                printf("%d", c);
            }
        }
    }
    return 0;
}