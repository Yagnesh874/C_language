#include <stdio.h>
int main()
{
    int number1;
    int number2;
    int temp = 0;
    printf("Enter number 1 : ");
    scanf("%d", &number1);

    printf("Enter number 2 : ");
    scanf("%d", &number2);

    printf("Before swap value is %d and %d \n", number1, number2);

    temp = number1;
    number1 = number2;
    number2 = temp;

    printf("After swap value is %d and %d \n", number1, number2);

    return 0;
}