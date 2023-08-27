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
    if (a > b && a > c)
    {
        printf("A is large number ");
    }
    if (b > a && b > c)
    {
        printf("B is large number ");
    }
    if (c > a && c > b)
    {
        printf("C is large number ");
    }
    
}