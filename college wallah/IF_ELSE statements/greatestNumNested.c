#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter number 1 : ");
    scanf("%d", &a);
    printf("Enter number 2 : ");
    scanf("%d", &b);
    printf("Enter number 3 : ");
    scanf("%d", &c);
    if (a > b)
    {

        if (a > c)
        {

            printf("%d is greatest", a);
        }
        else
            printf("%d is greatest", c);
    }

    else

        if (b > c)
    {

        printf("%d is greatest", b);
    }

    else

        printf("%d is greatest", c);
}