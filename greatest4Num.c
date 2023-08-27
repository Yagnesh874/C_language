#include <stdio.h>
int main()
{
    int a;
    printf("Enter number 1 : ");
    scanf("%d", &a);
    int b;
    printf("Enter number 2 : ");
    scanf("%d", &b);
    int c;
    printf("Enter number 3 : ");
    scanf("%d", &c);
    int d;
    printf("Enter number 4 : ");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("%d is large number ", a);
    }
    if (b > a && b > c && b > d)
    {
        printf("%d is large number ", b);
    }
    if (c > a && c > b && c > d)
    {
        printf("%d is large number ", c);
    }
    if (d > a && d > c && d > b)
    {
        printf("%d is large number ", d);
    }
}