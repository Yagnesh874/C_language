#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a number 1 : ");
    scanf("%d", &a);
    printf("Enter a number 2 : ");
    scanf("%d", &b);
    c = a; 
    a = b; 
    b = c;
    printf("a is =%d b is =%d\n", a, b);
    return 0;
}