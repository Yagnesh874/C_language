#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter number 1 : ");
    scanf("%d", &a);
    printf("Enter number 2 : ");
    scanf("%d", &b);
    printf("Enter number 3 : ");
    scanf("%d", &c);
    if ((a + b) > c && (b + c) > a && (a + c) > b)
    {
        printf("This is the triangle");
    }
    else
    {
        printf("This is not triangle");
    }
}