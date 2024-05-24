#include <stdio.h>
int main()
{
    char op;
    int a, b;
    printf("Enter operator : ");
    scanf("%c", &op);
    printf("Enter number 1 : ");
    scanf("%d", &a);
    printf("Enter number 2  : ");
    scanf("%d", &b);

    if (op == '+')
    {
        printf("The sum of two number is : %d ", a + b);
    }
    else if (op == '-')
    {
        printf("The substraction of two number is : %d", a - b);
    }
    else if (op == '*')
    {
        printf("The multiplication of two number is : %d", a * b);
    }
    else
    {
        printf("The divison of two number is : %d", a / b);
    }
    return 0;
}