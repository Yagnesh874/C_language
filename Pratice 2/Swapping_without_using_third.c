#include <stdio.h>
int main()
{
    int a, b;//a=35,b=10
    printf("Enter a number 1 : ");
    scanf("%d", &a);
    printf("Enter a number 2 : ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping a=%d b=%d\n", a, b);
    return 0;
}