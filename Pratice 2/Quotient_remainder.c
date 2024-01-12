#include <stdio.h>
int main()
{
    int number1, number2;
    printf("Enter number 1 : ");
    scanf("%d", &number1);
    printf("Enter number 2 : ");
    scanf("%d", &number2);
    float quo = number1 / number2;
    float rem = number1 % number2;
    printf("%f", quo);
    printf("%f", rem);
}