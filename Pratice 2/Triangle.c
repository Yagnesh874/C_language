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
    if (a == b && b == c && c == a)
    {
        printf("This equal lateral triangle");
    }
    else if (a == a && b == b && c == c)
    {
        printf("This is an Isosceles Triangle");
    }
    else
    {
        printf("This is an scalence Triangle");
    }

    return 0;
}