#include <stdio.h>
int main()
{
    char c;
    int a, b, res;
    printf("enter your choice +,-,*,/");
    scanf("%c", &c);
    printf("enter the  two integer number");
    scanf("%d %d", &a, &b);

    switch (c)
    {
    case '+':
        res = a + b;
        printf("addition of %d\n", res);
        break;
    case '-':
        res = a - b;
        printf("substraction of %d\n", res);
        break;
    case '*':
        res = a * b;
        printf("multification of %d\n", res);
        break;
    case '/':
        res = a / b;
        printf("divison is %d\n", res);
        break;
    default:
        printf("wrong input");
        break;
    }
}