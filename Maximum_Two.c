#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the number 1 : ");
    scanf("%d", &a);
    printf("Enter the number 2 : ");
    scanf("%d", &b);
    if (a > b)
    {
        printf("%d is maximum", a);
    }
    else
    {
        printf("%d is maximum", b);
    }
}